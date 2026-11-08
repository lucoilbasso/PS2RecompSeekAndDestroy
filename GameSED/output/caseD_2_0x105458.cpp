#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_2
// Address: 0x105458 - 0x105480
void caseD_2_0x105458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x105458");
#endif

    switch (ctx->pc) {
        case 0x105474u: goto label_105474;
        default: break;
    }

    ctx->pc = 0x105458u;

    // 0x105458: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x105458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10545c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x105460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105464: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105464u;
    {
        const bool branch_taken_0x105464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x105464) {
            ctx->pc = 0x105468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105464u;
            // 0x105468: 0x8f8288cc  lw          $v0, -0x7734($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105480u;
            return;
        }
    }
    ctx->pc = 0x10546Cu;
    // 0x10546c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10546Cu;
    SET_GPR_U32(ctx, 31, 0x105474u);
    ctx->pc = 0x105470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10546Cu;
    // 0x105470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10546Cu, 0x105474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105474u;
label_105474:
    // 0x105474: 0x8f8388cc  lw          $v1, -0x7734($gp)
    ctx->pc = 0x105474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x105478: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x105478u;
    {
        const bool branch_taken_0x105478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105478u;
        // 0x10547c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105478) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x105480u;
}
