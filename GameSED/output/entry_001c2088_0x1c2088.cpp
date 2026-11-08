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

// Function: entry_001c2088
// Address: 0x1c2088 - 0x1c20b4
void entry_001c2088_0x1c2088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2088_0x1c2088");
#endif

    switch (ctx->pc) {
        case 0x1c20a8u: goto label_1c20a8;
        default: break;
    }

    ctx->pc = 0x1c2088u;

    // 0x1c2088: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c208c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c2090: 0x2665dcc0  addiu       $a1, $s3, -0x2340
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1c2094: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c2094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c2098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c209c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c20a0: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C20A0u;
    SET_GPR_U32(ctx, 31, 0x1C20A8u);
    ctx->pc = 0x1C20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20A0u;
    // 0x1c20a4: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C20A0u, 0x1C20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20A8u;
label_1c20a8:
    // 0x1c20a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c20a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c20ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c20acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c20b0: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x1c20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    ctx->pc = 0x1c20b4u;
}
