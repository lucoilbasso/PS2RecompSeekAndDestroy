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

// Function: Cmd_UNIT_EXTRA_Entry__FP15BsSCDEntControl
// Address: 0x14b270 - 0x14b510
void Cmd_UNIT_EXTRA_Entry__FP15BsSCDEntControl_0x14b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_UNIT_EXTRA_Entry__FP15BsSCDEntControl_0x14b270");
#endif

    switch (ctx->pc) {
        case 0x14b270u: goto label_14b270;
        case 0x14b274u: goto label_14b274;
        case 0x14b278u: goto label_14b278;
        case 0x14b27cu: goto label_14b27c;
        case 0x14b280u: goto label_14b280;
        case 0x14b284u: goto label_14b284;
        case 0x14b288u: goto label_14b288;
        case 0x14b28cu: goto label_14b28c;
        case 0x14b290u: goto label_14b290;
        case 0x14b294u: goto label_14b294;
        case 0x14b298u: goto label_14b298;
        case 0x14b29cu: goto label_14b29c;
        case 0x14b2a0u: goto label_14b2a0;
        case 0x14b2a4u: goto label_14b2a4;
        case 0x14b2a8u: goto label_14b2a8;
        case 0x14b2acu: goto label_14b2ac;
        case 0x14b2b0u: goto label_14b2b0;
        case 0x14b2b4u: goto label_14b2b4;
        case 0x14b2b8u: goto label_14b2b8;
        case 0x14b2bcu: goto label_14b2bc;
        case 0x14b2c0u: goto label_14b2c0;
        case 0x14b2c4u: goto label_14b2c4;
        case 0x14b2c8u: goto label_14b2c8;
        case 0x14b2ccu: goto label_14b2cc;
        case 0x14b2d0u: goto label_14b2d0;
        case 0x14b2d4u: goto label_14b2d4;
        case 0x14b2d8u: goto label_14b2d8;
        case 0x14b2dcu: goto label_14b2dc;
        case 0x14b2e0u: goto label_14b2e0;
        case 0x14b2e4u: goto label_14b2e4;
        case 0x14b2e8u: goto label_14b2e8;
        case 0x14b2ecu: goto label_14b2ec;
        case 0x14b2f0u: goto label_14b2f0;
        case 0x14b2f4u: goto label_14b2f4;
        case 0x14b2f8u: goto label_14b2f8;
        case 0x14b2fcu: goto label_14b2fc;
        case 0x14b300u: goto label_14b300;
        case 0x14b304u: goto label_14b304;
        case 0x14b308u: goto label_14b308;
        case 0x14b30cu: goto label_14b30c;
        case 0x14b310u: goto label_14b310;
        case 0x14b314u: goto label_14b314;
        case 0x14b318u: goto label_14b318;
        case 0x14b31cu: goto label_14b31c;
        case 0x14b320u: goto label_14b320;
        case 0x14b324u: goto label_14b324;
        case 0x14b328u: goto label_14b328;
        case 0x14b32cu: goto label_14b32c;
        case 0x14b330u: goto label_14b330;
        case 0x14b334u: goto label_14b334;
        case 0x14b338u: goto label_14b338;
        case 0x14b33cu: goto label_14b33c;
        case 0x14b340u: goto label_14b340;
        case 0x14b344u: goto label_14b344;
        case 0x14b348u: goto label_14b348;
        case 0x14b34cu: goto label_14b34c;
        case 0x14b350u: goto label_14b350;
        case 0x14b354u: goto label_14b354;
        case 0x14b358u: goto label_14b358;
        case 0x14b35cu: goto label_14b35c;
        case 0x14b360u: goto label_14b360;
        case 0x14b364u: goto label_14b364;
        case 0x14b368u: goto label_14b368;
        case 0x14b36cu: goto label_14b36c;
        case 0x14b370u: goto label_14b370;
        case 0x14b374u: goto label_14b374;
        case 0x14b378u: goto label_14b378;
        case 0x14b37cu: goto label_14b37c;
        case 0x14b380u: goto label_14b380;
        case 0x14b384u: goto label_14b384;
        case 0x14b388u: goto label_14b388;
        case 0x14b38cu: goto label_14b38c;
        case 0x14b390u: goto label_14b390;
        case 0x14b394u: goto label_14b394;
        case 0x14b398u: goto label_14b398;
        case 0x14b39cu: goto label_14b39c;
        case 0x14b3a0u: goto label_14b3a0;
        case 0x14b3a4u: goto label_14b3a4;
        case 0x14b3a8u: goto label_14b3a8;
        case 0x14b3acu: goto label_14b3ac;
        case 0x14b3b0u: goto label_14b3b0;
        case 0x14b3b4u: goto label_14b3b4;
        case 0x14b3b8u: goto label_14b3b8;
        case 0x14b3bcu: goto label_14b3bc;
        case 0x14b3c0u: goto label_14b3c0;
        case 0x14b3c4u: goto label_14b3c4;
        case 0x14b3c8u: goto label_14b3c8;
        case 0x14b3ccu: goto label_14b3cc;
        case 0x14b3d0u: goto label_14b3d0;
        case 0x14b3d4u: goto label_14b3d4;
        case 0x14b3d8u: goto label_14b3d8;
        case 0x14b3dcu: goto label_14b3dc;
        case 0x14b3e0u: goto label_14b3e0;
        case 0x14b3e4u: goto label_14b3e4;
        case 0x14b3e8u: goto label_14b3e8;
        case 0x14b3ecu: goto label_14b3ec;
        case 0x14b3f0u: goto label_14b3f0;
        case 0x14b3f4u: goto label_14b3f4;
        case 0x14b3f8u: goto label_14b3f8;
        case 0x14b3fcu: goto label_14b3fc;
        case 0x14b400u: goto label_14b400;
        case 0x14b404u: goto label_14b404;
        case 0x14b408u: goto label_14b408;
        case 0x14b40cu: goto label_14b40c;
        case 0x14b410u: goto label_14b410;
        case 0x14b414u: goto label_14b414;
        case 0x14b418u: goto label_14b418;
        case 0x14b41cu: goto label_14b41c;
        case 0x14b420u: goto label_14b420;
        case 0x14b424u: goto label_14b424;
        case 0x14b428u: goto label_14b428;
        case 0x14b42cu: goto label_14b42c;
        case 0x14b430u: goto label_14b430;
        case 0x14b434u: goto label_14b434;
        case 0x14b438u: goto label_14b438;
        case 0x14b43cu: goto label_14b43c;
        case 0x14b440u: goto label_14b440;
        case 0x14b444u: goto label_14b444;
        case 0x14b448u: goto label_14b448;
        case 0x14b44cu: goto label_14b44c;
        case 0x14b450u: goto label_14b450;
        case 0x14b454u: goto label_14b454;
        case 0x14b458u: goto label_14b458;
        case 0x14b45cu: goto label_14b45c;
        case 0x14b460u: goto label_14b460;
        case 0x14b464u: goto label_14b464;
        case 0x14b468u: goto label_14b468;
        case 0x14b46cu: goto label_14b46c;
        case 0x14b470u: goto label_14b470;
        case 0x14b474u: goto label_14b474;
        case 0x14b478u: goto label_14b478;
        case 0x14b47cu: goto label_14b47c;
        case 0x14b480u: goto label_14b480;
        case 0x14b484u: goto label_14b484;
        case 0x14b488u: goto label_14b488;
        case 0x14b48cu: goto label_14b48c;
        case 0x14b490u: goto label_14b490;
        case 0x14b494u: goto label_14b494;
        case 0x14b498u: goto label_14b498;
        case 0x14b49cu: goto label_14b49c;
        case 0x14b4a0u: goto label_14b4a0;
        case 0x14b4a4u: goto label_14b4a4;
        case 0x14b4a8u: goto label_14b4a8;
        case 0x14b4acu: goto label_14b4ac;
        case 0x14b4b0u: goto label_14b4b0;
        case 0x14b4b4u: goto label_14b4b4;
        case 0x14b4b8u: goto label_14b4b8;
        case 0x14b4bcu: goto label_14b4bc;
        case 0x14b4c0u: goto label_14b4c0;
        case 0x14b4c4u: goto label_14b4c4;
        case 0x14b4c8u: goto label_14b4c8;
        case 0x14b4ccu: goto label_14b4cc;
        case 0x14b4d0u: goto label_14b4d0;
        case 0x14b4d4u: goto label_14b4d4;
        case 0x14b4d8u: goto label_14b4d8;
        case 0x14b4dcu: goto label_14b4dc;
        case 0x14b4e0u: goto label_14b4e0;
        case 0x14b4e4u: goto label_14b4e4;
        case 0x14b4e8u: goto label_14b4e8;
        case 0x14b4ecu: goto label_14b4ec;
        case 0x14b4f0u: goto label_14b4f0;
        case 0x14b4f4u: goto label_14b4f4;
        case 0x14b4f8u: goto label_14b4f8;
        case 0x14b4fcu: goto label_14b4fc;
        case 0x14b500u: goto label_14b500;
        case 0x14b504u: goto label_14b504;
        case 0x14b508u: goto label_14b508;
        case 0x14b50cu: goto label_14b50c;
        default: break;
    }

    ctx->pc = 0x14b270u;

label_14b270:
    // 0x14b270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14b274:
    // 0x14b274: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14b274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_14b278:
    // 0x14b278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14b27c:
    // 0x14b27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14b280:
    // 0x14b280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14b284:
    // 0x14b284: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_14b288:
    // 0x14b288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14b28c:
    // 0x14b28c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_14b290:
    // 0x14b290: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x14b290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_14b294:
    // 0x14b294: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x14b294u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_14b298:
    // 0x14b298: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x14b298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_14b29c:
    // 0x14b29c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x14b29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_14b2a0:
    // 0x14b2a0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_14b2a4:
    // 0x14b2a4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x14b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_14b2a8:
    // 0x14b2a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14b2ac:
    // 0x14b2ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_14b2b0:
    // 0x14b2b0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
label_14b2b4:
    if (ctx->pc == 0x14B2B4u) {
        ctx->pc = 0x14B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2B0u;
        // 0x14b2b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B2B8u;
        goto label_14b2b8;
    }
    ctx->pc = 0x14B2B0u;
    {
        const bool branch_taken_0x14b2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2B0u;
        // 0x14b2b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2b0) {
            ctx->pc = 0x14B2C8u;
            goto label_14b2c8;
        }
    }
    ctx->pc = 0x14B2B8u;
label_14b2b8:
    // 0x14b2b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_14b2bc:
    // 0x14b2bc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_14b2c0:
    // 0x14b2c0: 0xc068186  jal         func_1A0618
label_14b2c4:
    if (ctx->pc == 0x14B2C4u) {
        ctx->pc = 0x14B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2C0u;
        // 0x14b2c4: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B2C8u;
        goto label_14b2c8;
    }
    ctx->pc = 0x14B2C0u;
    SET_GPR_U32(ctx, 31, 0x14B2C8u);
    ctx->pc = 0x14B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2C0u;
    // 0x14b2c4: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B2C0u, 0x14B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C8u;
label_14b2c8:
    // 0x14b2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b2cc:
    // 0x14b2cc: 0xc06a26e  jal         func_1A89B8
label_14b2d0:
    if (ctx->pc == 0x14B2D0u) {
        ctx->pc = 0x14B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2CCu;
        // 0x14b2d0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B2D4u;
        goto label_14b2d4;
    }
    ctx->pc = 0x14B2CCu;
    SET_GPR_U32(ctx, 31, 0x14B2D4u);
    ctx->pc = 0x14B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2CCu;
    // 0x14b2d0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B2CCu, 0x14B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2D4u;
label_14b2d4:
    // 0x14b2d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b2d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14b2d8:
    // 0x14b2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b2dc:
    // 0x14b2dc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_14b2e0:
    if (ctx->pc == 0x14B2E0u) {
        ctx->pc = 0x14B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2DCu;
        // 0x14b2e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B2E4u;
        goto label_14b2e4;
    }
    ctx->pc = 0x14B2DCu;
    {
        const bool branch_taken_0x14b2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2DCu;
        // 0x14b2e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2dc) {
            ctx->pc = 0x14B2F8u;
            goto label_14b2f8;
        }
    }
    ctx->pc = 0x14B2E4u;
label_14b2e4:
    // 0x14b2e4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_14b2e8:
    if (ctx->pc == 0x14B2E8u) {
        ctx->pc = 0x14B2ECu;
        goto label_14b2ec;
    }
    ctx->pc = 0x14B2E4u;
    {
        const bool branch_taken_0x14b2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b2e4) {
            ctx->pc = 0x14B328u;
            goto label_14b328;
        }
    }
    ctx->pc = 0x14B2ECu;
label_14b2ec:
    // 0x14b2ec: 0x1000007f  b           . + 4 + (0x7F << 2)
label_14b2f0:
    if (ctx->pc == 0x14B2F0u) {
        ctx->pc = 0x14B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2ECu;
        // 0x14b2f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B2F4u;
        goto label_14b2f4;
    }
    ctx->pc = 0x14B2ECu;
    {
        const bool branch_taken_0x14b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2ECu;
        // 0x14b2f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2ec) {
            ctx->pc = 0x14B4ECu;
            goto label_14b4ec;
        }
    }
    ctx->pc = 0x14B2F4u;
label_14b2f4:
    // 0x14b2f4: 0x0  nop
    ctx->pc = 0x14b2f4u;
    // NOP
label_14b2f8:
    // 0x14b2f8: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x14b2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_14b2fc:
    // 0x14b2fc: 0x10c0007a  beqz        $a2, . + 4 + (0x7A << 2)
label_14b300:
    if (ctx->pc == 0x14B300u) {
        ctx->pc = 0x14B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2FCu;
        // 0x14b300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B304u;
        goto label_14b304;
    }
    ctx->pc = 0x14B2FCu;
    {
        const bool branch_taken_0x14b2fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2FCu;
        // 0x14b300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2fc) {
            ctx->pc = 0x14B4E8u;
            goto label_14b4e8;
        }
    }
    ctx->pc = 0x14B304u;
label_14b304:
    // 0x14b304: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14b308:
    // 0x14b308: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14b30c:
    // 0x14b30c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14b30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14b310:
    // 0x14b310: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14b314:
    // 0x14b314: 0x60f809  jalr        $v1
label_14b318:
    if (ctx->pc == 0x14B318u) {
        ctx->pc = 0x14B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B314u;
        // 0x14b318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B31Cu;
        goto label_14b31c;
    }
    ctx->pc = 0x14B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14B31Cu);
        ctx->pc = 0x14B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B314u;
        // 0x14b318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B314u, 0x14B31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B31Cu;
label_14b31c:
    // 0x14b31c: 0x10000072  b           . + 4 + (0x72 << 2)
label_14b320:
    if (ctx->pc == 0x14B320u) {
        ctx->pc = 0x14B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B31Cu;
        // 0x14b320: 0xae4001c4  sw          $zero, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B324u;
        goto label_14b324;
    }
    ctx->pc = 0x14B31Cu;
    {
        const bool branch_taken_0x14b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B31Cu;
        // 0x14b320: 0xae4001c4  sw          $zero, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b31c) {
            ctx->pc = 0x14B4E8u;
            goto label_14b4e8;
        }
    }
    ctx->pc = 0x14B324u;
label_14b324:
    // 0x14b324: 0x0  nop
    ctx->pc = 0x14b324u;
    // NOP
label_14b328:
    // 0x14b328: 0xc06a282  jal         func_1A8A08
label_14b32c:
    if (ctx->pc == 0x14B32Cu) {
        ctx->pc = 0x14B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B328u;
        // 0x14b32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B330u;
        goto label_14b330;
    }
    ctx->pc = 0x14B328u;
    SET_GPR_U32(ctx, 31, 0x14B330u);
    ctx->pc = 0x14B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B328u;
    // 0x14b32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B328u, 0x14B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B330u;
label_14b330:
    // 0x14b330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b334:
    // 0x14b334: 0xc06a282  jal         func_1A8A08
label_14b338:
    if (ctx->pc == 0x14B338u) {
        ctx->pc = 0x14B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B334u;
        // 0x14b338: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B33Cu;
        goto label_14b33c;
    }
    ctx->pc = 0x14B334u;
    SET_GPR_U32(ctx, 31, 0x14B33Cu);
    ctx->pc = 0x14B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B334u;
    // 0x14b338: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B334u, 0x14B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B33Cu;
label_14b33c:
    // 0x14b33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b340:
    // 0x14b340: 0xc06a282  jal         func_1A8A08
label_14b344:
    if (ctx->pc == 0x14B344u) {
        ctx->pc = 0x14B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B340u;
        // 0x14b344: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B348u;
        goto label_14b348;
    }
    ctx->pc = 0x14B340u;
    SET_GPR_U32(ctx, 31, 0x14B348u);
    ctx->pc = 0x14B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B340u;
    // 0x14b344: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B340u, 0x14B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B348u;
label_14b348:
    // 0x14b348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b34c:
    // 0x14b34c: 0xc06a282  jal         func_1A8A08
label_14b350:
    if (ctx->pc == 0x14B350u) {
        ctx->pc = 0x14B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B34Cu;
        // 0x14b350: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B354u;
        goto label_14b354;
    }
    ctx->pc = 0x14B34Cu;
    SET_GPR_U32(ctx, 31, 0x14B354u);
    ctx->pc = 0x14B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B34Cu;
    // 0x14b350: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B34Cu, 0x14B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B354u;
label_14b354:
    // 0x14b354: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_14b358:
    // 0x14b358: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_14b35c:
    // 0x14b35c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14b360:
    // 0x14b360: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_14b364:
    if (ctx->pc == 0x14B364u) {
        ctx->pc = 0x14B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B360u;
        // 0x14b364: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B368u;
        goto label_14b368;
    }
    ctx->pc = 0x14B360u;
    {
        const bool branch_taken_0x14b360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B360u;
        // 0x14b364: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b360) {
            ctx->pc = 0x14B378u;
            goto label_14b378;
        }
    }
    ctx->pc = 0x14B368u;
label_14b368:
    // 0x14b368: 0xc06a26e  jal         func_1A89B8
label_14b36c:
    if (ctx->pc == 0x14B36Cu) {
        ctx->pc = 0x14B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B368u;
        // 0x14b36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B370u;
        goto label_14b370;
    }
    ctx->pc = 0x14B368u;
    SET_GPR_U32(ctx, 31, 0x14B370u);
    ctx->pc = 0x14B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B368u;
    // 0x14b36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B368u, 0x14B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B370u;
label_14b370:
    // 0x14b370: 0x10000002  b           . + 4 + (0x2 << 2)
label_14b374:
    if (ctx->pc == 0x14B374u) {
        ctx->pc = 0x14B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B370u;
        // 0x14b374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B378u;
        goto label_14b378;
    }
    ctx->pc = 0x14B370u;
    {
        const bool branch_taken_0x14b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B370u;
        // 0x14b374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b370) {
            ctx->pc = 0x14B37Cu;
            goto label_14b37c;
        }
    }
    ctx->pc = 0x14B378u;
label_14b378:
    // 0x14b378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14b378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b37c:
    // 0x14b37c: 0xc0682b2  jal         func_1A0AC8
label_14b380:
    if (ctx->pc == 0x14B380u) {
        ctx->pc = 0x14B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B37Cu;
        // 0x14b380: 0x24040186  addiu       $a0, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B384u;
        goto label_14b384;
    }
    ctx->pc = 0x14B37Cu;
    SET_GPR_U32(ctx, 31, 0x14B384u);
    ctx->pc = 0x14B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B37Cu;
    // 0x14b380: 0x24040186  addiu       $a0, $zero, 0x186 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14B37Cu, 0x14B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B384u;
label_14b384:
    // 0x14b384: 0xc0682b6  jal         func_1A0AD8
label_14b388:
    if (ctx->pc == 0x14B388u) {
        ctx->pc = 0x14B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B384u;
        // 0x14b388: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B38Cu;
        goto label_14b38c;
    }
    ctx->pc = 0x14B384u;
    SET_GPR_U32(ctx, 31, 0x14B38Cu);
    ctx->pc = 0x14B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B384u;
    // 0x14b388: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14B384u, 0x14B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B38Cu;
label_14b38c:
    // 0x14b38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b390:
    // 0x14b390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14b394:
    // 0x14b394: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14b398:
    // 0x14b398: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x14b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
label_14b39c:
    // 0x14b39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b3a0:
    // 0x14b3a0: 0xc05ac70  jal         func_16B1C0
label_14b3a4:
    if (ctx->pc == 0x14B3A4u) {
        ctx->pc = 0x14B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3A0u;
        // 0x14b3a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B3A8u;
        goto label_14b3a8;
    }
    ctx->pc = 0x14B3A0u;
    SET_GPR_U32(ctx, 31, 0x14B3A8u);
    ctx->pc = 0x14B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3A0u;
    // 0x14b3a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1C0u, 0x14B3A0u, 0x14B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3A8u;
label_14b3a8:
    // 0x14b3a8: 0xae1201e0  sw          $s2, 0x1E0($s0)
    ctx->pc = 0x14b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 18));
label_14b3ac:
    // 0x14b3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b3b0:
    // 0x14b3b0: 0xc06825c  jal         func_1A0970
label_14b3b4:
    if (ctx->pc == 0x14B3B4u) {
        ctx->pc = 0x14B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3B0u;
        // 0x14b3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B3B8u;
        goto label_14b3b8;
    }
    ctx->pc = 0x14B3B0u;
    SET_GPR_U32(ctx, 31, 0x14B3B8u);
    ctx->pc = 0x14B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B0u;
    // 0x14b3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14B3B0u, 0x14B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B8u;
label_14b3b8:
    // 0x14b3b8: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_14b3bc:
    // 0x14b3bc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_14b3c0:
    // 0x14b3c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14b3c4:
    // 0x14b3c4: 0x8c85b830  lw          $a1, -0x47D0($a0)
    ctx->pc = 0x14b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
label_14b3c8:
    // 0x14b3c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14b3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_14b3cc:
    // 0x14b3cc: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x14b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_14b3d0:
    // 0x14b3d0: 0xae0201e8  sw          $v0, 0x1E8($s0)
    ctx->pc = 0x14b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
label_14b3d4:
    // 0x14b3d4: 0x8ca70044  lw          $a3, 0x44($a1)
    ctx->pc = 0x14b3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_14b3d8:
    // 0x14b3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b3dc:
    // 0x14b3dc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x14b3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14b3e0:
    // 0x14b3e0: 0xae0701e4  sw          $a3, 0x1E4($s0)
    ctx->pc = 0x14b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 7));
label_14b3e4:
    // 0x14b3e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14b3e8:
    // 0x14b3e8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_14b3ec:
    // 0x14b3ec: 0x40f809  jalr        $v0
label_14b3f0:
    if (ctx->pc == 0x14B3F0u) {
        ctx->pc = 0x14B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ECu;
        // 0x14b3f0: 0x8ce50124  lw          $a1, 0x124($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B3F4u;
        goto label_14b3f4;
    }
    ctx->pc = 0x14B3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B3F4u);
        ctx->pc = 0x14B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ECu;
        // 0x14b3f0: 0x8ce50124  lw          $a1, 0x124($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3ECu, 0x14B3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B3F4u;
label_14b3f4:
    // 0x14b3f4: 0x260701f0  addiu       $a3, $s0, 0x1F0
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_14b3f8:
    // 0x14b3f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14b3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14b3fc:
    // 0x14b3fc: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x14b3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b400:
    // 0x14b400: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b404:
    // 0x14b404: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x14b404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b408:
    // 0x14b408: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b40c:
    // 0x14b40c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b40cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b410:
    // 0x14b410: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b410u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b414:
    // 0x14b414: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b414u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b418:
    // 0x14b418: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14b418u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_14b41c:
    // 0x14b41c: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_14b420:
    // 0x14b420: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x14b420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b424:
    // 0x14b424: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b428:
    // 0x14b428: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x14b428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b42c:
    // 0x14b42c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b430:
    // 0x14b430: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b430u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b434:
    // 0x14b434: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b434u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b438:
    // 0x14b438: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b438u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b43c:
    // 0x14b43c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14b440:
    // 0x14b440: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x14b440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_14b444:
    // 0x14b444: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x14b444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b448:
    // 0x14b448: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b44c:
    // 0x14b44c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x14b44cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b450:
    // 0x14b450: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b454:
    // 0x14b454: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b454u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b458:
    // 0x14b458: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b458u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b45c:
    // 0x14b45c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b45cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b460:
    // 0x14b460: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14b460u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_14b464:
    // 0x14b464: 0x26060220  addiu       $a2, $s0, 0x220
    ctx->pc = 0x14b464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_14b468:
    // 0x14b468: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x14b468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b46c:
    // 0x14b46c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b470:
    // 0x14b470: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x14b470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b474:
    // 0x14b474: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b478:
    // 0x14b478: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b478u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b47c:
    // 0x14b47c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b47cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b480:
    // 0x14b480: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b480u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b484:
    // 0x14b484: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b484u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14b488:
    // 0x14b488: 0x4616b880  add.s       $f2, $f23, $f22
    ctx->pc = 0x14b488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_14b48c:
    // 0x14b48c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_14b490:
    // 0x14b490: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14b490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14b494:
    // 0x14b494: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x14b494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_14b498:
    // 0x14b498: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x14b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_14b49c:
    // 0x14b49c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14b49cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_14b4a0:
    // 0x14b4a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14b4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_14b4a4:
    // 0x14b4a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x14b4a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b4a8:
    // 0x14b4a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b4ac:
    // 0x14b4ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14b4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b4b0:
    // 0x14b4b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b4b4:
    // 0x14b4b4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b4b4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b4b8:
    // 0x14b4b8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b4b8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b4bc:
    // 0x14b4bc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b4bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b4c0:
    // 0x14b4c0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14b4c4:
    // 0x14b4c4: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x14b4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_14b4c8:
    // 0x14b4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b4cc:
    // 0x14b4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b4d0:
    // 0x14b4d0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_14b4d4:
    // 0x14b4d4: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x14b4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_14b4d8:
    // 0x14b4d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_14b4dc:
    // 0x14b4dc: 0x40f809  jalr        $v0
label_14b4e0:
    if (ctx->pc == 0x14B4E0u) {
        ctx->pc = 0x14B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4DCu;
        // 0x14b4e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B4E4u;
        goto label_14b4e4;
    }
    ctx->pc = 0x14B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B4E4u);
        ctx->pc = 0x14B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4DCu;
        // 0x14b4e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4DCu, 0x14B4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B4E4u;
label_14b4e4:
    // 0x14b4e4: 0xae5001c4  sw          $s0, 0x1C4($s2)
    ctx->pc = 0x14b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 16));
label_14b4e8:
    // 0x14b4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b4ec:
    // 0x14b4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14b4f0:
    // 0x14b4f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14b4f4:
    // 0x14b4f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14b4f8:
    // 0x14b4f8: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x14b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_14b4fc:
    // 0x14b4fc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x14b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_14b500:
    // 0x14b500: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x14b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14b504:
    // 0x14b504: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x14b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14b508:
    // 0x14b508: 0x3e00008  jr          $ra
label_14b50c:
    if (ctx->pc == 0x14B50Cu) {
        ctx->pc = 0x14B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B508u;
        // 0x14b50c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B510u;
        goto label_fallthrough_0x14b508;
    }
    ctx->pc = 0x14B508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B508u;
        // 0x14b50c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14b508:
    ctx->pc = 0x14B510u;
}
