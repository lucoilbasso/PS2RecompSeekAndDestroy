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

// Function: entry_0012b2d8
// Address: 0x12b2d8 - 0x12b380
void entry_0012b2d8_0x12b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b2d8_0x12b2d8");
#endif

    switch (ctx->pc) {
        case 0x12b374u: goto label_12b374;
        default: break;
    }

    ctx->pc = 0x12b2d8u;

    // 0x12b2d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12b2dc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x12b2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x12b2e0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x12b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x12b2e4: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x12b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x12b2e8: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x12b2ec: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x12b2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x12b2f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12b2f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12b2f8: 0x346324e2  ori         $v1, $v1, 0x24E2
    ctx->pc = 0x12b2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9442);
    // 0x12b2fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12b2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12b300: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x12b300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x12b304: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12b308: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x12b30c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12b310: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x12b314: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12b318: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x12b318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x12b31c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12b31cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12b320: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x12b320u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x12b324: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x12b324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b328: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12b32c: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x12b32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12b330: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12b334: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x12b334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x12b338: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12b338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12b33c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b340: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12b340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12b344: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12b344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12b348: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12b348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x12b34c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12b34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12b350: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x12b350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12b354: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12b354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12b358: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x12b358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x12b35c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12b360: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12b364: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12b368: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12b368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12b36c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12B36Cu;
    SET_GPR_U32(ctx, 31, 0x12B374u);
    ctx->pc = 0x12B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B36Cu;
    // 0x12b370: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12B36Cu, 0x12B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B374u;
label_12b374:
    // 0x12b374: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12b374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12b378: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12b378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12b37c: 0x0  nop
    ctx->pc = 0x12b37cu;
    // NOP
    ctx->pc = 0x12b380u;
}
