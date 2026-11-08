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

// Function: entry_00188360
// Address: 0x188360 - 0x1883f8
void entry_00188360_0x188360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188360_0x188360");
#endif

    switch (ctx->pc) {
        case 0x1883e4u: goto label_1883e4;
        case 0x1883f0u: goto label_1883f0;
        default: break;
    }

    ctx->pc = 0x188360u;

    // 0x188360: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x188360u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x188364: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x188364u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x188368: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x18836c: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x18836cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x188370: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x188370u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x188374: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x188378: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18837c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x18837cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x188380: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x188384: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x188384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x188388: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x188388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x18838c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188390: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x188394: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x188394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x188398: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x188398u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x18839c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1883a0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1883a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883a4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1883a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1883a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1883ac: 0x2442d000  addiu       $v0, $v0, -0x3000
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955008));
    // 0x1883b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1883b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1883b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1883b8: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x1883b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1883bc: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x1883bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1883c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1883c4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1883c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1883cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1883ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1883d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1883D0u;
    {
        const bool branch_taken_0x1883d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D0u;
        // 0x1883d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883d0) {
            ctx->pc = 0x1883F8u;
            return;
        }
    }
    ctx->pc = 0x1883D8u;
    // 0x1883d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1883d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1883dc: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1883DCu;
    SET_GPR_U32(ctx, 31, 0x1883E4u);
    ctx->pc = 0x1883E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883DCu;
    // 0x1883e0: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1883DCu, 0x1883E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883E4u;
label_1883e4:
    // 0x1883e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1883e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883e8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1883E8u;
    SET_GPR_U32(ctx, 31, 0x1883F0u);
    ctx->pc = 0x1883ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883E8u;
    // 0x1883ec: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1883E8u, 0x1883F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883F0u;
label_1883f0:
    // 0x1883f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1883F0u;
    {
        const bool branch_taken_0x1883f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F0u;
        // 0x1883f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f0) {
            ctx->pc = 0x188400u;
            return;
        }
    }
    ctx->pc = 0x1883F8u;
}
