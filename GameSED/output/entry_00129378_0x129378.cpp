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

// Function: entry_00129378
// Address: 0x129378 - 0x1293e0
void entry_00129378_0x129378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129378_0x129378");
#endif

    switch (ctx->pc) {
        case 0x1293d4u: goto label_1293d4;
        default: break;
    }

    ctx->pc = 0x129378u;

    // 0x129378: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x129378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12937c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x12937cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x129380: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x129380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x129384: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x129384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x129388: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x129388u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12938c: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x12938cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x129390: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x129390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129394: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x129394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x129398: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12939c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12939cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293a0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1293a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1293a4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x1293a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1293a8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1293a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1293ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1293acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1293b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1293b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1293b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1293b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1293b8: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1293b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1293bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1293bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1293c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1293c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1293c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1293c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1293c8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1293c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1293cc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1293CCu;
    SET_GPR_U32(ctx, 31, 0x1293D4u);
    ctx->pc = 0x1293D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293CCu;
    // 0x1293d0: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1293CCu, 0x1293D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293D4u;
label_1293d4:
    // 0x1293d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1293d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1293d8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1293d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1293dc: 0x0  nop
    ctx->pc = 0x1293dcu;
    // NOP
    ctx->pc = 0x1293e0u;
}
