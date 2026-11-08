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

// Function: entry_00136624
// Address: 0x136624 - 0x136648
void entry_00136624_0x136624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136624_0x136624");
#endif

    switch (ctx->pc) {
        case 0x136640u: goto label_136640;
        default: break;
    }

    ctx->pc = 0x136624u;

    // 0x136624: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x136624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x136628: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13662c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136630: 0x50640041  beql        $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x136630u;
    {
        const bool branch_taken_0x136630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x136630) {
            ctx->pc = 0x136634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136630u;
            // 0x136634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136738u;
            return;
        }
    }
    ctx->pc = 0x136638u;
    // 0x136638: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x136638u;
    SET_GPR_U32(ctx, 31, 0x136640u);
    ctx->pc = 0x13663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136638u;
    // 0x13663c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x136638u, 0x136640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136640u;
label_136640:
    // 0x136640: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x136640u;
    {
        const bool branch_taken_0x136640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136640u;
        // 0x136644: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136640) {
            ctx->pc = 0x136734u;
            return;
        }
    }
    ctx->pc = 0x136648u;
}
