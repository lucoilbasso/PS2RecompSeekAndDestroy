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

// Function: entry_00137f20
// Address: 0x137f20 - 0x137f5c
void entry_00137f20_0x137f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f20_0x137f20");
#endif

    switch (ctx->pc) {
        case 0x137f2cu: goto label_137f2c;
        default: break;
    }

    ctx->pc = 0x137f20u;

    // 0x137f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f24: 0xc061422  jal         func_185088
    ctx->pc = 0x137F24u;
    SET_GPR_U32(ctx, 31, 0x137F2Cu);
    ctx->pc = 0x137F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F24u;
    // 0x137f28: 0x261300e0  addiu       $s3, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137F24u, 0x137F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F2Cu;
label_137f2c:
    // 0x137f2c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x137f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x137f30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137f34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137f38: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x137f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137f3c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x137f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137f40: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x137f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x137f44: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x137f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137f48: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x137f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x137f4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137F4Cu;
    {
        const bool branch_taken_0x137f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F4Cu;
        // 0x137f50: 0x27b40060  addiu       $s4, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f4c) {
            ctx->pc = 0x137F5Cu;
            return;
        }
    }
    ctx->pc = 0x137F54u;
    // 0x137f54: 0xc061920  jal         func_186480
    ctx->pc = 0x137F54u;
    SET_GPR_U32(ctx, 31, 0x137F5Cu);
    ctx->pc = 0x137F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F54u;
    // 0x137f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137F54u, 0x137F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F5Cu;
}
