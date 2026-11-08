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

// Function: entry_0018b1a4
// Address: 0x18b1a4 - 0x18b208
void entry_0018b1a4_0x18b1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b1a4_0x18b1a4");
#endif

    switch (ctx->pc) {
        case 0x18b200u: goto label_18b200;
        default: break;
    }

    ctx->pc = 0x18b1a4u;

    // 0x18b1a4: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18b1a8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x18b1ac: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x18b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x18b1b0: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x18b1b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x18b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18b1b8: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x18b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x18b1bc: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x18b1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1c0: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x18b1c4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18b1c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b1cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18b1d0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x18b1d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b1d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x18b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x18b1d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18b1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18b1dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18b1e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18b1e4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x18b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x18b1e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b1ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18b1f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x18b1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x18b1f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18b1f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18B1F8u;
    SET_GPR_U32(ctx, 31, 0x18B200u);
    ctx->pc = 0x18B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1F8u;
    // 0x18b1fc: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18B1F8u, 0x18B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B200u;
label_18b200:
    // 0x18b200: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18b200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18b204: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x18b208u;
}
