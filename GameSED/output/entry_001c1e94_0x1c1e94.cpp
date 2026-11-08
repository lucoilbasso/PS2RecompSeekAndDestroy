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

// Function: entry_001c1e94
// Address: 0x1c1e94 - 0x1c1ec8
void entry_001c1e94_0x1c1e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e94_0x1c1e94");
#endif

    switch (ctx->pc) {
        case 0x1c1eb0u: goto label_1c1eb0;
        default: break;
    }

    ctx->pc = 0x1c1e94u;

    // 0x1c1e94: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c1e98: 0x2625dcc0  addiu       $a1, $s1, -0x2340
    ctx->pc = 0x1c1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958272));
    // 0x1c1e9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c1e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c1ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ea4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c1ea8: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C1EA8u;
    SET_GPR_U32(ctx, 31, 0x1C1EB0u);
    ctx->pc = 0x1C1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EA8u;
    // 0x1c1eac: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C1EA8u, 0x1C1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EB0u;
label_1c1eb0:
    // 0x1c1eb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c1eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1eb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c1eb8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c1eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1ebc: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x1c1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x1c1ec0: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x1c1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x1c1ec4: 0x8e030838  lw          $v1, 0x838($s0)
    ctx->pc = 0x1c1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
    ctx->pc = 0x1c1ec8u;
}
