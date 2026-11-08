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

// Function: entry_00107748
// Address: 0x107748 - 0x107778
void entry_00107748_0x107748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107748_0x107748");
#endif

    switch (ctx->pc) {
        case 0x107764u: goto label_107764;
        default: break;
    }

    ctx->pc = 0x107748u;

    // 0x107748: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x107748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10774c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x107750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107754: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x107754u;
    {
        const bool branch_taken_0x107754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x107754) {
            ctx->pc = 0x107758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107754u;
            // 0x107758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1077ECu;
            return;
        }
    }
    ctx->pc = 0x10775Cu;
    // 0x10775c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10775Cu;
    SET_GPR_U32(ctx, 31, 0x107764u);
    ctx->pc = 0x107760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10775Cu;
    // 0x107760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10775Cu, 0x107764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107764u;
label_107764:
    // 0x107764: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x107764u;
    {
        const bool branch_taken_0x107764 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x107768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107764u;
        // 0x107768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107764) {
            ctx->pc = 0x107778u;
            return;
        }
    }
    ctx->pc = 0x10776Cu;
    // 0x10776c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10776Cu;
    {
        const bool branch_taken_0x10776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10776Cu;
        // 0x107770: 0xa2250007  sb          $a1, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10776c) {
            ctx->pc = 0x107790u;
            return;
        }
    }
    ctx->pc = 0x107774u;
    // 0x107774: 0x0  nop
    ctx->pc = 0x107774u;
    // NOP
    ctx->pc = 0x107778u;
}
