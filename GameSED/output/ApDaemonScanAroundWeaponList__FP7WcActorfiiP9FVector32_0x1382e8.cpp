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

// Function: ApDaemonScanAroundWeaponList__FP7WcActorfiiP9FVector32
// Address: 0x1382e8 - 0x138480
void ApDaemonScanAroundWeaponList__FP7WcActorfiiP9FVector32_0x1382e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanAroundWeaponList__FP7WcActorfiiP9FVector32_0x1382e8");
#endif

    switch (ctx->pc) {
        case 0x138330u: goto label_138330;
        case 0x13837cu: goto label_13837c;
        case 0x138384u: goto label_138384;
        case 0x138390u: goto label_138390;
        case 0x1383d0u: goto label_1383d0;
        default: break;
    }

    ctx->pc = 0x1382e8u;

    // 0x1382e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1382ec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1382ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1382f0: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x1382f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x1382f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1382f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1382f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1382f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1382fc: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x1382fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x138300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138304: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x138304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x138308: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x138308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x13830c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13830cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138310: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x138310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x138314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x138318: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x138318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13831c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x13831cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x138320: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x138320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x138324: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x138324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138328: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x138328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x13832c: 0x0  nop
    ctx->pc = 0x13832cu;
    // NOP
label_138330:
    // 0x138330: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x138334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x138334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x138338: 0x0  nop
    ctx->pc = 0x138338u;
    // NOP
    // 0x13833c: 0x0  nop
    ctx->pc = 0x13833cu;
    // NOP
    // 0x138340: 0x0  nop
    ctx->pc = 0x138340u;
    // NOP
    // 0x138344: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138344u;
    {
        const bool branch_taken_0x138344 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x138348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138344u;
        // 0x138348: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138344) {
            ctx->pc = 0x138330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138330;
        }
    }
    ctx->pc = 0x13834Cu;
    // 0x13834c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138350: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138350u;
    {
        const bool branch_taken_0x138350 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x138350) {
            ctx->pc = 0x138388u;
            goto label_138388;
        }
    }
    ctx->pc = 0x138358u;
    // 0x138358: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x138358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13835c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13835cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138360: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x138364: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x138364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x138368: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x138368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13836c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13836Cu;
    {
        const bool branch_taken_0x13836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13836c) {
            ctx->pc = 0x13837Cu;
            goto label_13837c;
        }
    }
    ctx->pc = 0x138374u;
    // 0x138374: 0xc061920  jal         func_186480
    ctx->pc = 0x138374u;
    SET_GPR_U32(ctx, 31, 0x13837Cu);
    ctx->pc = 0x138378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138374u;
    // 0x138378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x138374u, 0x13837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13837Cu;
label_13837c:
    // 0x13837c: 0xc061422  jal         func_185088
    ctx->pc = 0x13837Cu;
    SET_GPR_U32(ctx, 31, 0x138384u);
    ctx->pc = 0x138380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13837Cu;
    // 0x138380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13837Cu, 0x138384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138384u;
label_138384:
    // 0x138384: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x138384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_138388:
    // 0x138388: 0xc04de22  jal         func_137888
    ctx->pc = 0x138388u;
    SET_GPR_U32(ctx, 31, 0x138390u);
    ctx->pc = 0x13838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138388u;
    // 0x13838c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137888u, 0x138388u, 0x138390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138390u;
label_138390:
    // 0x138390: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x138390u;
    {
        const bool branch_taken_0x138390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x138394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138390u;
        // 0x138394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138390) {
            ctx->pc = 0x138460u;
            goto label_138460;
        }
    }
    ctx->pc = 0x138398u;
    // 0x138398: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13839c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383a0: 0x2447bc50  addiu       $a3, $v0, -0x43B0
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x1383a4: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x1383a8: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1383A8u;
    {
        const bool branch_taken_0x1383a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1383ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A8u;
        // 0x1383ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383a8) {
            ctx->pc = 0x138458u;
            goto label_138458;
        }
    }
    ctx->pc = 0x1383B0u;
    // 0x1383b0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1383b4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1383b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1383b8: 0x2446a390  addiu       $a2, $v0, -0x5C70
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x1383bc: 0x240a2118  addiu       $t2, $zero, 0x2118
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x1383c0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1383c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1383c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1383cc: 0x0  nop
    ctx->pc = 0x1383ccu;
    // NOP
label_1383d0:
    // 0x1383d0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1383d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1383d4: 0x546a0019  bnel        $v1, $t2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1383D4u;
    {
        const bool branch_taken_0x1383d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1383d4) {
            ctx->pc = 0x1383D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383D4u;
            // 0x1383d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13843Cu;
            goto label_13843c;
        }
    }
    ctx->pc = 0x1383DCu;
    // 0x1383dc: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1383DCu;
    {
        const bool branch_taken_0x1383dc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1383dc) {
            ctx->pc = 0x1383F0u;
            goto label_1383f0;
        }
    }
    ctx->pc = 0x1383E4u;
    // 0x1383e4: 0x84420264  lh          $v0, 0x264($v0)
    ctx->pc = 0x1383e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x1383e8: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1383E8u;
    {
        const bool branch_taken_0x1383e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1383e8) {
            ctx->pc = 0x1383ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383E8u;
            // 0x1383ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1383FCu;
            goto label_1383fc;
        }
    }
    ctx->pc = 0x1383F0u;
label_1383f0:
    // 0x1383f0: 0x56490012  bnel        $s2, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1383F0u;
    {
        const bool branch_taken_0x1383f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 9));
        if (branch_taken_0x1383f0) {
            ctx->pc = 0x1383F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383F0u;
            // 0x1383f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13843Cu;
            goto label_13843c;
        }
    }
    ctx->pc = 0x1383F8u;
    // 0x1383f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1383fc:
    // 0x1383fc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1383fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x138400: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x138400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138404: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x138404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138408: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x138408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13840c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13840cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138410: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x138410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x138414: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x138414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138418: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x138418u;
    {
        const bool branch_taken_0x138418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138418) {
            ctx->pc = 0x13841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138418u;
            // 0x13841c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13843Cu;
            goto label_13843c;
        }
    }
    ctx->pc = 0x138420u;
    // 0x138420: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x138420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x138424: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x138424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138428u;
    {
        const bool branch_taken_0x138428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138428u;
        // 0x13842c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138428) {
            ctx->pc = 0x13843Cu;
            goto label_13843c;
        }
    }
    ctx->pc = 0x138430u;
    // 0x138430: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x138430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x138434: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x138434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x138438: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_13843c:
    // 0x13843c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x13843cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x138440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138440u;
    {
        const bool branch_taken_0x138440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138440u;
        // 0x138444: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138440) {
            ctx->pc = 0x138458u;
            goto label_138458;
        }
    }
    ctx->pc = 0x138448u;
    // 0x138448: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x138448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x13844c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x13844cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138450: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x138450u;
    {
        const bool branch_taken_0x138450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138450) {
            ctx->pc = 0x138454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138450u;
            // 0x138454: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1383D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1383d0;
        }
    }
    ctx->pc = 0x138458u;
label_138458:
    // 0x138458: 0xaf888a1c  sw          $t0, -0x75E4($gp)
    ctx->pc = 0x138458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 8));
    // 0x13845c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13845cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138460:
    // 0x138460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x138464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x138468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13846c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13846cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x138470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138474: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x138474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138478: 0x3e00008  jr          $ra
    ctx->pc = 0x138478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138478u;
        // 0x13847c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138480u;
}
