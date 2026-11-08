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

// Function: entry_00128318
// Address: 0x128318 - 0x12836c
void entry_00128318_0x128318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128318_0x128318");
#endif

    switch (ctx->pc) {
        case 0x128328u: goto label_128328;
        case 0x128338u: goto label_128338;
        default: break;
    }

    ctx->pc = 0x128318u;

    // 0x128318: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x12831c: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x12831cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x128320: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128320u;
    SET_GPR_U32(ctx, 31, 0x128328u);
    ctx->pc = 0x128324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128320u;
    // 0x128324: 0x8cc40084  lw          $a0, 0x84($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128320u, 0x128328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128328u;
label_128328:
    // 0x128328: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12832c: 0x2442d650  addiu       $v0, $v0, -0x29B0
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x128330: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128330u;
    SET_GPR_U32(ctx, 31, 0x128338u);
    ctx->pc = 0x128334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128330u;
    // 0x128334: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128330u, 0x128338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128338u;
label_128338:
    // 0x128338: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12833c: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x12833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x128340: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x128344: 0x8c70008c  lw          $s0, 0x8C($v1)
    ctx->pc = 0x128344u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D6DCu));
    // 0x128348: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x128348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x12834c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x12834cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6D0u));
    // 0x128350: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x128350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128354: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x128354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x128358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12835c: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x12835cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6D8u));
    // 0x128360: 0xacc5008c  sw          $a1, 0x8C($a2)
    ctx->pc = 0x128360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6DCu, _value); } while (0);
    // 0x128364: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x128364u;
    SET_GPR_U32(ctx, 31, 0x12836Cu);
    ctx->pc = 0x128368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128364u;
    // 0x128368: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x128364u, 0x12836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12836Cu;
}
