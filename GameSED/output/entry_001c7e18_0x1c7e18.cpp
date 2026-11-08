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

// Function: entry_001c7e18
// Address: 0x1c7e18 - 0x1c7e74
void entry_001c7e18_0x1c7e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7e18_0x1c7e18");
#endif

    switch (ctx->pc) {
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e54u: goto label_1c7e54;
        default: break;
    }

    ctx->pc = 0x1c7e18u;

    // 0x1c7e18: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c7e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c7e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c7e20: 0x2259807  srav        $s3, $a1, $s1
    ctx->pc = 0x1c7e20u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x1c7e24: 0x2131824  and         $v1, $s0, $s3
    ctx->pc = 0x1c7e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x1c7e28: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1c7e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1c7e2c: 0x5060004e  beql        $v1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C7E2Cu;
    {
        const bool branch_taken_0x1c7e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e2c) {
            ctx->pc = 0x1C7E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7E2Cu;
            // 0x1c7e30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F68u;
            return;
        }
    }
    ctx->pc = 0x1C7E34u;
    // 0x1c7e34: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c7e38: 0xdc45bba8  ld          $a1, -0x4458($v0)
    ctx->pc = 0x1c7e38u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BBA8u));
    // 0x1c7e3c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E44u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7E3Cu, 0x1C7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E44u;
label_1c7e44:
    // 0x1c7e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e4c: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C7E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E54u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C7E4Cu, 0x1C7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E54u;
label_1c7e54:
    // 0x1c7e54: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C7E54u;
    {
        const bool branch_taken_0x1c7e54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c7e54) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7E5Cu;
    // 0x1c7e5c: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7E5Cu;
    {
        const bool branch_taken_0x1c7e5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E5Cu;
        // 0x1c7e60: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e5c) {
            ctx->pc = 0x1C7E74u;
            return;
        }
    }
    ctx->pc = 0x1C7E64u;
    // 0x1c7e64: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1c7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1c7e68: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x1c7e68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1c7e6c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c7e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c7e70: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x1c7e70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    ctx->pc = 0x1c7e74u;
}
