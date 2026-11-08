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

// Function: entry_0015c270
// Address: 0x15c270 - 0x15c2c0
void entry_0015c270_0x15c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c270_0x15c270");
#endif

    switch (ctx->pc) {
        case 0x15c294u: goto label_15c294;
        default: break;
    }

    ctx->pc = 0x15c270u;

    // 0x15c270: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x15c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x15c274: 0x584000be  blezl       $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x15C274u;
    {
        const bool branch_taken_0x15c274 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15c274) {
            ctx->pc = 0x15C278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C274u;
            // 0x15c278: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C570u;
            return;
        }
    }
    ctx->pc = 0x15C27Cu;
    // 0x15c27c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x15c27cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c284: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x15c284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x15c288: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15c288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c28c: 0xc056b12  jal         func_15AC48
    ctx->pc = 0x15C28Cu;
    SET_GPR_U32(ctx, 31, 0x15C294u);
    ctx->pc = 0x15C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C28Cu;
    // 0x15c290: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC48u, 0x15C28Cu, 0x15C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C294u;
label_15c294:
    // 0x15c294: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x15c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x15c298: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15C298u;
    {
        const bool branch_taken_0x15c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C298u;
        // 0x15c29c: 0x8fc70030  lw          $a3, 0x30($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c298) {
            ctx->pc = 0x15C334u;
            return;
        }
    }
    ctx->pc = 0x15C2A0u;
    // 0x15c2a0: 0x28e203e8  slti        $v0, $a3, 0x3E8
    ctx->pc = 0x15c2a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x15c2a4: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x15c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15c2a8: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x15c2a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x15c2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2b0: 0x28e20064  slti        $v0, $a3, 0x64
    ctx->pc = 0x15c2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x15c2b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C2B4u;
    {
        const bool branch_taken_0x15c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B4u;
        // 0x15c2b8: 0xaea7001c  sw          $a3, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2b4) {
            ctx->pc = 0x15C2DCu;
            return;
        }
    }
    ctx->pc = 0x15C2BCu;
    // 0x15c2bc: 0x0  nop
    ctx->pc = 0x15c2bcu;
    // NOP
    ctx->pc = 0x15c2c0u;
}
