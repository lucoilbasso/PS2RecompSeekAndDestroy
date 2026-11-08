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

// Function: entry_00107608
// Address: 0x107608 - 0x107650
void entry_00107608_0x107608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107608_0x107608");
#endif

    switch (ctx->pc) {
        case 0x107628u: goto label_107628;
        default: break;
    }

    ctx->pc = 0x107608u;

    // 0x107608: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x107608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956592)));
    // 0x10760c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10760cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x107610: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x107610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107618: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x107618u;
    {
        const bool branch_taken_0x107618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107618) {
            ctx->pc = 0x10761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107618u;
            // 0x10761c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107660u;
            return;
        }
    }
    ctx->pc = 0x107620u;
    // 0x107620: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107620u;
    SET_GPR_U32(ctx, 31, 0x107628u);
    ctx->pc = 0x107624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107620u;
    // 0x107624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107620u, 0x107628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107628u;
label_107628:
    // 0x107628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10762c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x107630: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107630u;
    {
        const bool branch_taken_0x107630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107630) {
            ctx->pc = 0x107634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107630u;
            // 0x107634: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107650u;
            return;
        }
    }
    ctx->pc = 0x107638u;
    // 0x107638: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x107638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x10763c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10763cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x107640: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x107640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x107644: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x107644u;
    {
        const bool branch_taken_0x107644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107644u;
        // 0x107648: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107644) {
            ctx->pc = 0x10766Cu;
            return;
        }
    }
    ctx->pc = 0x10764Cu;
    // 0x10764c: 0x0  nop
    ctx->pc = 0x10764cu;
    // NOP
    ctx->pc = 0x107650u;
}
