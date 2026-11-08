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

// Function: entry_00176a2c
// Address: 0x176a2c - 0x176a98
void entry_00176a2c_0x176a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176a2c_0x176a2c");
#endif

    switch (ctx->pc) {
        case 0x176a68u: goto label_176a68;
        case 0x176a8cu: goto label_176a8c;
        default: break;
    }

    ctx->pc = 0x176a2cu;

    // 0x176a2c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x176a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x176a30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176a34: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x176a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176a38: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x176a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176a3c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x176a40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176a4c: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x176a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x176a50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x176a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x176a54: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x176a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a58: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176a5c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x176a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x176a60: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176A60u;
    SET_GPR_U32(ctx, 31, 0x176A68u);
    ctx->pc = 0x176A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A60u;
    // 0x176a64: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176A60u, 0x176A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A68u;
label_176a68:
    // 0x176a68: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176a6c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176a70: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176a74: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176a78: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176a7c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176a80: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176a84: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176A84u;
    SET_GPR_U32(ctx, 31, 0x176A8Cu);
    ctx->pc = 0x176A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A84u;
    // 0x176a88: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176A84u, 0x176A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A8Cu;
label_176a8c:
    // 0x176a8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176a90: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176a94: 0x0  nop
    ctx->pc = 0x176a94u;
    // NOP
    ctx->pc = 0x176a98u;
}
