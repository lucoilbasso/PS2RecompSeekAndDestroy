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

// Function: entry_00176884
// Address: 0x176884 - 0x1768f0
void entry_00176884_0x176884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176884_0x176884");
#endif

    switch (ctx->pc) {
        case 0x1768c0u: goto label_1768c0;
        case 0x1768e4u: goto label_1768e4;
        default: break;
    }

    ctx->pc = 0x176884u;

    // 0x176884: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x176884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x176888: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17688c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176890: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176894: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x176898: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17689c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1768a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1768a4: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x1768a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1768a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1768ac: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1768acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768b0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1768b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1768b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1768b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1768b8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1768B8u;
    SET_GPR_U32(ctx, 31, 0x1768C0u);
    ctx->pc = 0x1768BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768B8u;
    // 0x1768bc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1768B8u, 0x1768C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768C0u;
label_1768c0:
    // 0x1768c0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1768c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1768c4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1768c8: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1768cc: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x1768ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x1768d0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1768d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1768d4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1768d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1768d8: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1768dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1768DCu;
    SET_GPR_U32(ctx, 31, 0x1768E4u);
    ctx->pc = 0x1768E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768DCu;
    // 0x1768e0: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1768DCu, 0x1768E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768E4u;
label_1768e4:
    // 0x1768e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1768e8: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1768e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1768ec: 0x0  nop
    ctx->pc = 0x1768ecu;
    // NOP
    ctx->pc = 0x1768f0u;
}
