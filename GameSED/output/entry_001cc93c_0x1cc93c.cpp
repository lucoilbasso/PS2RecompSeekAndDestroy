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

// Function: entry_001cc93c
// Address: 0x1cc93c - 0x1cc960
void entry_001cc93c_0x1cc93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc93c_0x1cc93c");
#endif

    switch (ctx->pc) {
        case 0x1cc950u: goto label_1cc950;
        default: break;
    }

    ctx->pc = 0x1cc93cu;

    // 0x1cc93c: 0x1636000e  bne         $s1, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC93Cu;
    {
        const bool branch_taken_0x1cc93c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x1CC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC93Cu;
        // 0x1cc940: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc93c) {
            ctx->pc = 0x1CC978u;
            return;
        }
    }
    ctx->pc = 0x1CC944u;
    // 0x1cc944: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cc944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc948: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CC948u;
    SET_GPR_U32(ctx, 31, 0x1CC950u);
    ctx->pc = 0x1CC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC948u;
    // 0x1cc94c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC948u, 0x1CC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC950u;
label_1cc950:
    // 0x1cc950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC978u;
            return;
        }
    }
    ctx->pc = 0x1CC958u;
    // 0x1cc958: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1CC958u;
    {
        const bool branch_taken_0x1cc958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC958u;
        // 0x1cc95c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc958) {
            ctx->pc = 0x1CCA38u;
            return;
        }
    }
    ctx->pc = 0x1CC960u;
}
