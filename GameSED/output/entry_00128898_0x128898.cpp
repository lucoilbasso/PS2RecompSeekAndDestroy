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

// Function: entry_00128898
// Address: 0x128898 - 0x128940
void entry_00128898_0x128898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128898_0x128898");
#endif

    switch (ctx->pc) {
        case 0x128938u: goto label_128938;
        default: break;
    }

    ctx->pc = 0x128898u;

    // 0x128898: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x128898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12889c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x12889cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1288a0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1288a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1288a4: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1288a8: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x1288a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x1288ac: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1288acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1288b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1288b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1288b4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1288b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1288b8: 0x346324e2  ori         $v1, $v1, 0x24E2
    ctx->pc = 0x1288b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9442);
    // 0x1288bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1288bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1288c0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x1288c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x1288c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1288c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1288c8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1288c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1288cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1288ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1288d0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1288d4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1288d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1288d8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1288d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1288dc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1288dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1288e0: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1288e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1288e4: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1288e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1288e8: 0x2652d650  addiu       $s2, $s2, -0x29B0
    ctx->pc = 0x1288e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956624));
    // 0x1288ec: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1288f0: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1288f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1288f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1288f8: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1288fc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x128900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x128900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128904: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x128904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x128908: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x128908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12890c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12890cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x128910: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x128910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x128914: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x128914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x128918: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x128918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12891c: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x12891cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x128920: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x128924: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x128924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x128928: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x128928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12892c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12892cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x128930: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128930u;
    SET_GPR_U32(ctx, 31, 0x128938u);
    ctx->pc = 0x128934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128930u;
    // 0x128934: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128930u, 0x128938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128938u;
label_128938:
    // 0x128938: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x128938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12893c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12893cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x128940u;
}
