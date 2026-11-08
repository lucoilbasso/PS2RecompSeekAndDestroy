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

// Function: entry_00176b30
// Address: 0x176b30 - 0x176b70
void entry_00176b30_0x176b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176b30_0x176b30");
#endif

    switch (ctx->pc) {
        case 0x176b40u: goto label_176b40;
        case 0x176b64u: goto label_176b64;
        default: break;
    }

    ctx->pc = 0x176b30u;

    // 0x176b30: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x176b30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x176b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b38: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176B38u;
    SET_GPR_U32(ctx, 31, 0x176B40u);
    ctx->pc = 0x176B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B38u;
    // 0x176b3c: 0x2610e790  addiu       $s0, $s0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176B38u, 0x176B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B40u;
label_176b40:
    // 0x176b40: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176b44: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176b48: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176b4c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176b50: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176b54: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176b58: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176b5c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176B5Cu;
    SET_GPR_U32(ctx, 31, 0x176B64u);
    ctx->pc = 0x176B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B5Cu;
    // 0x176b60: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176B5Cu, 0x176B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B64u;
label_176b64:
    // 0x176b64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176b68: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176b6c: 0x0  nop
    ctx->pc = 0x176b6cu;
    // NOP
    ctx->pc = 0x176b70u;
}
