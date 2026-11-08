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

// Function: entry_0013d6e8
// Address: 0x13d6e8 - 0x13d720
void entry_0013d6e8_0x13d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d6e8_0x13d6e8");
#endif

    switch (ctx->pc) {
        case 0x13d6f0u: goto label_13d6f0;
        default: break;
    }

    ctx->pc = 0x13d6e8u;

label_13d6e8:
    // 0x13d6e8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13D6E8u;
    SET_GPR_U32(ctx, 31, 0x13D6F0u);
    ctx->pc = 0x13D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6E8u;
    // 0x13d6ec: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13D6E8u, 0x13D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6F0u;
label_13d6f0:
    // 0x13d6f0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13d6f4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13D6F4u;
    {
        const bool branch_taken_0x13d6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6F4u;
        // 0x13d6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6f4) {
            ctx->pc = 0x13D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d6e8;
        }
    }
    ctx->pc = 0x13D6FCu;
    // 0x13d6fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13d6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13d700: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D700u;
    {
        const bool branch_taken_0x13d700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D700u;
        // 0x13d704: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d700) {
            ctx->pc = 0x13D720u;
            return;
        }
    }
    ctx->pc = 0x13D708u;
    // 0x13d708: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13d70c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13d714: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x13d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x13d718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D718u;
    {
        const bool branch_taken_0x13d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D718u;
        // 0x13d71c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d718) {
            ctx->pc = 0x13D728u;
            return;
        }
    }
    ctx->pc = 0x13D720u;
}
