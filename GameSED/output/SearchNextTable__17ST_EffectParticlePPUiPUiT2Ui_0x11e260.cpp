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

// Function: SearchNextTable__17ST_EffectParticlePPUiPUiT2Ui
// Address: 0x11e260 - 0x11e3a8
void SearchNextTable__17ST_EffectParticlePPUiPUiT2Ui_0x11e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextTable__17ST_EffectParticlePPUiPUiT2Ui_0x11e260");
#endif

    switch (ctx->pc) {
        case 0x11e280u: goto label_11e280;
        case 0x11e288u: goto label_11e288;
        case 0x11e2c8u: goto label_11e2c8;
        case 0x11e330u: goto label_11e330;
        default: break;
    }

    ctx->pc = 0x11e260u;

    // 0x11e260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e264: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x11e264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11e26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e270: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E270u;
    {
        const bool branch_taken_0x11e270 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E270u;
        // 0x11e274: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e270) {
            ctx->pc = 0x11E290u;
            goto label_11e290;
        }
    }
    ctx->pc = 0x11E278u;
    // 0x11e278: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11E278u;
    {
        const bool branch_taken_0x11e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E278u;
        // 0x11e27c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e278) {
            ctx->pc = 0x11E304u;
            goto label_11e304;
        }
    }
    ctx->pc = 0x11E280u;
label_11e280:
    // 0x11e280: 0xc04780a  jal         func_11E028
    ctx->pc = 0x11E280u;
    SET_GPR_U32(ctx, 31, 0x11E288u);
    ctx->pc = 0x11E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E280u;
    // 0x11e284: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E028u, 0x11E280u, 0x11E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E288u;
label_11e288:
    // 0x11e288: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11E288u;
    {
        const bool branch_taken_0x11e288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E288u;
        // 0x11e28c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e288) {
            ctx->pc = 0x11E374u;
            goto label_11e374;
        }
    }
    ctx->pc = 0x11E290u;
label_11e290:
    // 0x11e290: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e294: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x11e294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e298: 0x24445a50  addiu       $a0, $v0, 0x5A50
    ctx->pc = 0x11e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11e2a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e2a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e2a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e2ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e2b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e2b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E2B4u;
    {
        const bool branch_taken_0x11e2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2B4u;
        // 0x11e2b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2b4) {
            ctx->pc = 0x11E304u;
            goto label_11e304;
        }
    }
    ctx->pc = 0x11E2BCu;
    // 0x11e2bc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x11e2bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11e2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e2c4: 0x0  nop
    ctx->pc = 0x11e2c4u;
    // NOP
label_11e2c8:
    // 0x11e2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e2d0: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e2d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e2d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E2D4u;
    {
        const bool branch_taken_0x11e2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2D4u;
        // 0x11e2d8: 0x4a1021  addu        $v0, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2d4) {
            ctx->pc = 0x11E304u;
            goto label_11e304;
        }
    }
    ctx->pc = 0x11E2DCu;
    // 0x11e2dc: 0x10890009  beq         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E2DCu;
    {
        const bool branch_taken_0x11e2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x11E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2DCu;
        // 0x11e2e0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2dc) {
            ctx->pc = 0x11E304u;
            goto label_11e304;
        }
    }
    ctx->pc = 0x11E2E4u;
    // 0x11e2e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e2e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e2ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e2f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e2f4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e2f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E2F8u;
    {
        const bool branch_taken_0x11e2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2F8u;
        // 0x11e2fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2f8) {
            ctx->pc = 0x11E2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e2c8;
        }
    }
    ctx->pc = 0x11E300u;
    // 0x11e300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e304:
    // 0x11e304: 0x15000022  bnez        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11E304u;
    {
        const bool branch_taken_0x11e304 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E304u;
        // 0x11e308: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e304) {
            ctx->pc = 0x11E390u;
            goto label_11e390;
        }
    }
    ctx->pc = 0x11E30Cu;
    // 0x11e30c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e314: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e318: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11E318u;
    {
        const bool branch_taken_0x11e318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E318u;
        // 0x11e31c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e318) {
            ctx->pc = 0x11E36Cu;
            goto label_11e36c;
        }
    }
    ctx->pc = 0x11E320u;
    // 0x11e320: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e324: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x11e324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e328: 0x24485a50  addiu       $t0, $v0, 0x5A50
    ctx->pc = 0x11e328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e32c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_11e330:
    // 0x11e330: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E330u;
    {
        const bool branch_taken_0x11e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x11e330) {
            ctx->pc = 0x11E334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E330u;
            // 0x11e334: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E338u;
    // 0x11e338: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x11e338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e33c: 0x10c7ffd0  beq         $a2, $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x11E33Cu;
    {
        const bool branch_taken_0x11e33c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x11e33c) {
            ctx->pc = 0x11E280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e280;
        }
    }
    ctx->pc = 0x11E344u;
    // 0x11e344: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x11e344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_11e348:
    // 0x11e348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e34c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11e350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11e358: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e35c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e360: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e364: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E364u;
    {
        const bool branch_taken_0x11e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e364) {
            ctx->pc = 0x11E330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e330;
        }
    }
    ctx->pc = 0x11E36Cu;
label_11e36c:
    // 0x11e36c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e370: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_11e374:
    // 0x11e374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e37c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E37Cu;
    {
        const bool branch_taken_0x11e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E37Cu;
        // 0x11e380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e37c) {
            ctx->pc = 0x11E39Cu;
            goto label_11e39c;
        }
    }
    ctx->pc = 0x11E384u;
    // 0x11e384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E388u;
    {
        const bool branch_taken_0x11e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E388u;
        // 0x11e38c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e388) {
            ctx->pc = 0x11E3A0u;
            goto label_11e3a0;
        }
    }
    ctx->pc = 0x11E390u;
label_11e390:
    // 0x11e390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e39c:
    // 0x11e39c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11e3a0:
    // 0x11e3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3A0u;
        // 0x11e3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E3A8u;
}
