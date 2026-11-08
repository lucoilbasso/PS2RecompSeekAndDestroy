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

// Function: entry_00116e18
// Address: 0x116e18 - 0x116e88
void entry_00116e18_0x116e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e18_0x116e18");
#endif

    switch (ctx->pc) {
        case 0x116e2cu: goto label_116e2c;
        case 0x116e38u: goto label_116e38;
        case 0x116e44u: goto label_116e44;
        default: break;
    }

    ctx->pc = 0x116e18u;

    // 0x116e18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x116e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x116e1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x116e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x116e20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116e24: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116E24u;
    SET_GPR_U32(ctx, 31, 0x116E2Cu);
    ctx->pc = 0x116E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E24u;
    // 0x116e28: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116E24u, 0x116E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E2Cu;
label_116e2c:
    // 0x116e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116E30u;
    SET_GPR_U32(ctx, 31, 0x116E38u);
    ctx->pc = 0x116E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E30u;
    // 0x116e34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116E30u, 0x116E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E38u;
label_116e38:
    // 0x116e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116E3Cu;
    SET_GPR_U32(ctx, 31, 0x116E44u);
    ctx->pc = 0x116E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E3Cu;
    // 0x116e40: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116E3Cu, 0x116E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E44u;
label_116e44:
    // 0x116e44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e48: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116e4c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x116e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x116e50: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116e54: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x116e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x116e58: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x116e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x116e5c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x116e60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x116e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x116e64: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x116e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x116e68: 0x264202a  slt         $a0, $s3, $a0
    ctx->pc = 0x116e68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x116e6c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x116e70: 0x2694d190  addiu       $s4, $s4, -0x2E70
    ctx->pc = 0x116e70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955408));
    // 0x116e74: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x116e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x116e78: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x116E78u;
    {
        const bool branch_taken_0x116e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E78u;
        // 0x116e7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e78) {
            ctx->pc = 0x116F80u;
            return;
        }
    }
    ctx->pc = 0x116E80u;
    // 0x116e80: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x116e80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x116e84: 0x0  nop
    ctx->pc = 0x116e84u;
    // NOP
    ctx->pc = 0x116e88u;
}
