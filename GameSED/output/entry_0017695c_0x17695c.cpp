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

// Function: entry_0017695c
// Address: 0x17695c - 0x1769c0
void entry_0017695c_0x17695c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017695c_0x17695c");
#endif

    switch (ctx->pc) {
        case 0x176994u: goto label_176994;
        case 0x1769b8u: goto label_1769b8;
        default: break;
    }

    ctx->pc = 0x17695cu;

    // 0x17695c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x17695cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x176960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176964: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176968: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x176968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17696c: 0x26630070  addiu       $v1, $s3, 0x70
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x176970: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176978: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17697c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x17697cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176980: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x176980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x176984: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176988: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x176988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17698c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x17698Cu;
    SET_GPR_U32(ctx, 31, 0x176994u);
    ctx->pc = 0x176990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17698Cu;
    // 0x176990: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x17698Cu, 0x176994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176994u;
label_176994:
    // 0x176994: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176998: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x17699c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x17699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1769a0: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x1769a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x1769a4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1769a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1769a8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1769a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1769ac: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1769acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1769b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1769B0u;
    SET_GPR_U32(ctx, 31, 0x1769B8u);
    ctx->pc = 0x1769B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769B0u;
    // 0x1769b4: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1769B0u, 0x1769B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769B8u;
label_1769b8:
    // 0x1769b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1769bc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1769bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    ctx->pc = 0x1769c0u;
}
