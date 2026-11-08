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

// Function: entry_00195f44
// Address: 0x195f44 - 0x195f88
void entry_00195f44_0x195f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195f44_0x195f44");
#endif

    switch (ctx->pc) {
        case 0x195f7cu: goto label_195f7c;
        default: break;
    }

    ctx->pc = 0x195f44u;

    // 0x195f44: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x195f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x195f48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x195f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f4c: 0x34e30040  ori         $v1, $a3, 0x40
    ctx->pc = 0x195f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x195f50: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x195f54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x195f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x195f58: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x195f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x195f5c: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x195f5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x195f60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x195f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f64: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x195f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x195f68: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x195f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x195f6c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x195f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x195f70: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x195f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x195f74: 0xc066442  jal         func_199108
    ctx->pc = 0x195F74u;
    SET_GPR_U32(ctx, 31, 0x195F7Cu);
    ctx->pc = 0x195F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F74u;
    // 0x195f78: 0x9607000a  lhu         $a3, 0xA($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x195F74u, 0x195F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F7Cu;
label_195f7c:
    // 0x195f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x195f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x195f88u;
}
