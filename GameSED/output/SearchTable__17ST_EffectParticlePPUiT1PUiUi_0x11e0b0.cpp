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

// Function: SearchTable__17ST_EffectParticlePPUiT1PUiUi
// Address: 0x11e0b0 - 0x11e25c
void SearchTable__17ST_EffectParticlePPUiT1PUiUi_0x11e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchTable__17ST_EffectParticlePPUiT1PUiUi_0x11e0b0");
#endif

    switch (ctx->pc) {
        case 0x11e0e0u: goto label_11e0e0;
        case 0x11e168u: goto label_11e168;
        case 0x11e1c0u: goto label_11e1c0;
        case 0x11e1c8u: goto label_11e1c8;
        case 0x11e1f8u: goto label_11e1f8;
        default: break;
    }

    ctx->pc = 0x11e0b0u;

    // 0x11e0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e0b4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x11e0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e0bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11e0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11e0c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x11e0c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11e0c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E0C8u;
    {
        const bool branch_taken_0x11e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C8u;
        // 0x11e0cc: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c8) {
            ctx->pc = 0x11E114u;
            goto label_11e114;
        }
    }
    ctx->pc = 0x11E0D0u;
    // 0x11e0d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e0d4: 0x244b5a50  addiu       $t3, $v0, 0x5A50
    ctx->pc = 0x11e0d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e0d8: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x11e0d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11e0dc: 0x0  nop
    ctx->pc = 0x11e0dcu;
    // NOP
label_11e0e0:
    // 0x11e0e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11e0e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11e0e8: 0x2ca30045  sltiu       $v1, $a1, 0x45
    ctx->pc = 0x11e0e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e0ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E0ECu;
    {
        const bool branch_taken_0x11e0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0ECu;
        // 0x11e0f0: 0x4b1021  addu        $v0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0ec) {
            ctx->pc = 0x11E118u;
            goto label_11e118;
        }
    }
    ctx->pc = 0x11E0F4u;
    // 0x11e0f4: 0x10aa0008  beq         $a1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E0F4u;
    {
        const bool branch_taken_0x11e0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x11E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0F4u;
        // 0x11e0f8: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0f4) {
            ctx->pc = 0x11E118u;
            goto label_11e118;
        }
    }
    ctx->pc = 0x11E0FCu;
    // 0x11e0fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e104: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x11e104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x11e108: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x11e108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11e10c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E10Cu;
    {
        const bool branch_taken_0x11e10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e10c) {
            ctx->pc = 0x11E110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E10Cu;
            // 0x11e110: 0x95050000  lhu         $a1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e0e0;
        }
    }
    ctx->pc = 0x11E114u;
label_11e114:
    // 0x11e114: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11e114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e118:
    // 0x11e118: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E118u;
    {
        const bool branch_taken_0x11e118 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E118u;
        // 0x11e11c: 0xac890000  sw          $t1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e118) {
            ctx->pc = 0x11E130u;
            goto label_11e130;
        }
    }
    ctx->pc = 0x11E120u;
    // 0x11e120: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11e124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e128: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x11E128u;
    {
        const bool branch_taken_0x11e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E128u;
        // 0x11e12c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e128) {
            ctx->pc = 0x11E250u;
            goto label_11e250;
        }
    }
    ctx->pc = 0x11E130u;
label_11e130:
    // 0x11e130: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e134: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x11e134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e138: 0x24445a50  addiu       $a0, $v0, 0x5A50
    ctx->pc = 0x11e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e13c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11e140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e148: 0x1222821  addu        $a1, $t1, $v0
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11e14c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e150: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e154: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E154u;
    {
        const bool branch_taken_0x11e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E154u;
        // 0x11e158: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e154) {
            ctx->pc = 0x11E1A0u;
            goto label_11e1a0;
        }
    }
    ctx->pc = 0x11E15Cu;
    // 0x11e15c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x11e15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e160: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11e160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e164: 0x0  nop
    ctx->pc = 0x11e164u;
    // NOP
label_11e168:
    // 0x11e168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e16c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e170: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e174: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E174u;
    {
        const bool branch_taken_0x11e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E174u;
        // 0x11e178: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e174) {
            ctx->pc = 0x11E1A4u;
            goto label_11e1a4;
        }
    }
    ctx->pc = 0x11E17Cu;
    // 0x11e17c: 0x108a0009  beq         $a0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E17Cu;
    {
        const bool branch_taken_0x11e17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x11E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E17Cu;
        // 0x11e180: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e17c) {
            ctx->pc = 0x11E1A4u;
            goto label_11e1a4;
        }
    }
    ctx->pc = 0x11E184u;
    // 0x11e184: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e18c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e190: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e194: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e198: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E198u;
    {
        const bool branch_taken_0x11e198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E198u;
        // 0x11e19c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e198) {
            ctx->pc = 0x11E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e168;
        }
    }
    ctx->pc = 0x11E1A0u;
label_11e1a0:
    // 0x11e1a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e1a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e1a4:
    // 0x11e1a4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E1A4u;
    {
        const bool branch_taken_0x11e1a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A4u;
        // 0x11e1a8: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1a4) {
            ctx->pc = 0x11E1D0u;
            goto label_11e1d0;
        }
    }
    ctx->pc = 0x11E1ACu;
    // 0x11e1ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11E1B4u;
    {
        const bool branch_taken_0x11e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1B4u;
        // 0x11e1b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1b4) {
            ctx->pc = 0x11E250u;
            goto label_11e250;
        }
    }
    ctx->pc = 0x11E1BCu;
    // 0x11e1bc: 0x0  nop
    ctx->pc = 0x11e1bcu;
    // NOP
label_11e1c0:
    // 0x11e1c0: 0xc04780a  jal         func_11E028
    ctx->pc = 0x11E1C0u;
    SET_GPR_U32(ctx, 31, 0x11E1C8u);
    ctx->pc = 0x11E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1C0u;
    // 0x11e1c4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E028u, 0x11E1C0u, 0x11E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C8u;
label_11e1c8:
    // 0x11e1c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11E1C8u;
    {
        const bool branch_taken_0x11e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1C8u;
        // 0x11e1cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1c8) {
            ctx->pc = 0x11E23Cu;
            goto label_11e23c;
        }
    }
    ctx->pc = 0x11E1D0u;
label_11e1d0:
    // 0x11e1d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11e1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e1d8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e1dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E1DCu;
    {
        const bool branch_taken_0x11e1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1DCu;
        // 0x11e1e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1dc) {
            ctx->pc = 0x11E234u;
            goto label_11e234;
        }
    }
    ctx->pc = 0x11E1E4u;
    // 0x11e1e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e1e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x11e1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e1ec: 0x24485a50  addiu       $t0, $v0, 0x5A50
    ctx->pc = 0x11e1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e1f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e1f4: 0x0  nop
    ctx->pc = 0x11e1f4u;
    // NOP
label_11e1f8:
    // 0x11e1f8: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E1F8u;
    {
        const bool branch_taken_0x11e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x11e1f8) {
            ctx->pc = 0x11E1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E1F8u;
            // 0x11e1fc: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E210u;
            goto label_11e210;
        }
    }
    ctx->pc = 0x11E200u;
    // 0x11e200: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e204: 0x10c7ffee  beq         $a2, $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11E204u;
    {
        const bool branch_taken_0x11e204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x11e204) {
            ctx->pc = 0x11E1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e1c0;
        }
    }
    ctx->pc = 0x11E20Cu;
    // 0x11e20c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x11e20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_11e210:
    // 0x11e210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e214: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11e218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e21c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11e220: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e228: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e22c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E22Cu;
    {
        const bool branch_taken_0x11e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e22c) {
            ctx->pc = 0x11E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e1f8;
        }
    }
    ctx->pc = 0x11E234u;
label_11e234:
    // 0x11e234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e238: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11e238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_11e23c:
    // 0x11e23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e244: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E244u;
    {
        const bool branch_taken_0x11e244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E244u;
        // 0x11e248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e244) {
            ctx->pc = 0x11E250u;
            goto label_11e250;
        }
    }
    ctx->pc = 0x11E24Cu;
    // 0x11e24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e250:
    // 0x11e250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11e250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e254: 0x3e00008  jr          $ra
    ctx->pc = 0x11E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E254u;
        // 0x11e258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E25Cu;
}
