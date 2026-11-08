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

// Function: ApUnitPlayerCleanUp__Fi
// Address: 0x14d250 - 0x14d308
void ApUnitPlayerCleanUp__Fi_0x14d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitPlayerCleanUp__Fi_0x14d250");
#endif

    switch (ctx->pc) {
        case 0x14d250u: goto label_14d250;
        case 0x14d254u: goto label_14d254;
        case 0x14d258u: goto label_14d258;
        case 0x14d25cu: goto label_14d25c;
        case 0x14d260u: goto label_14d260;
        case 0x14d264u: goto label_14d264;
        case 0x14d268u: goto label_14d268;
        case 0x14d26cu: goto label_14d26c;
        case 0x14d270u: goto label_14d270;
        case 0x14d274u: goto label_14d274;
        case 0x14d278u: goto label_14d278;
        case 0x14d27cu: goto label_14d27c;
        case 0x14d280u: goto label_14d280;
        case 0x14d284u: goto label_14d284;
        case 0x14d288u: goto label_14d288;
        case 0x14d28cu: goto label_14d28c;
        case 0x14d290u: goto label_14d290;
        case 0x14d294u: goto label_14d294;
        case 0x14d298u: goto label_14d298;
        case 0x14d29cu: goto label_14d29c;
        case 0x14d2a0u: goto label_14d2a0;
        case 0x14d2a4u: goto label_14d2a4;
        case 0x14d2a8u: goto label_14d2a8;
        case 0x14d2acu: goto label_14d2ac;
        case 0x14d2b0u: goto label_14d2b0;
        case 0x14d2b4u: goto label_14d2b4;
        case 0x14d2b8u: goto label_14d2b8;
        case 0x14d2bcu: goto label_14d2bc;
        case 0x14d2c0u: goto label_14d2c0;
        case 0x14d2c4u: goto label_14d2c4;
        case 0x14d2c8u: goto label_14d2c8;
        case 0x14d2ccu: goto label_14d2cc;
        case 0x14d2d0u: goto label_14d2d0;
        case 0x14d2d4u: goto label_14d2d4;
        case 0x14d2d8u: goto label_14d2d8;
        case 0x14d2dcu: goto label_14d2dc;
        case 0x14d2e0u: goto label_14d2e0;
        case 0x14d2e4u: goto label_14d2e4;
        case 0x14d2e8u: goto label_14d2e8;
        case 0x14d2ecu: goto label_14d2ec;
        case 0x14d2f0u: goto label_14d2f0;
        case 0x14d2f4u: goto label_14d2f4;
        case 0x14d2f8u: goto label_14d2f8;
        case 0x14d2fcu: goto label_14d2fc;
        case 0x14d300u: goto label_14d300;
        case 0x14d304u: goto label_14d304;
        default: break;
    }

    ctx->pc = 0x14d250u;

label_14d250:
    // 0x14d250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14d254:
    // 0x14d254: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14d254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14d258:
    // 0x14d258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14d25c:
    // 0x14d25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d260:
    // 0x14d260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_14d264:
    // 0x14d264: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14d264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14d268:
    // 0x14d268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14d26c:
    // 0x14d26c: 0x8c463630  lw          $a2, 0x3630($v0)
    ctx->pc = 0x14d26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_14d270:
    // 0x14d270: 0x50c00022  beql        $a2, $zero, . + 4 + (0x22 << 2)
label_14d274:
    if (ctx->pc == 0x14D274u) {
        ctx->pc = 0x14D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D270u;
        // 0x14d274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D278u;
        goto label_14d278;
    }
    ctx->pc = 0x14D270u;
    {
        const bool branch_taken_0x14d270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d270) {
            ctx->pc = 0x14D274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D270u;
            // 0x14d274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D2FCu;
            goto label_14d2fc;
        }
    }
    ctx->pc = 0x14D278u;
label_14d278:
    // 0x14d278: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
label_14d27c:
    if (ctx->pc == 0x14D27Cu) {
        ctx->pc = 0x14D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D278u;
        // 0x14d27c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D280u;
        goto label_14d280;
    }
    ctx->pc = 0x14D278u;
    {
        const bool branch_taken_0x14d278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d278) {
            ctx->pc = 0x14D27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D278u;
            // 0x14d27c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D2D0u;
            goto label_14d2d0;
        }
    }
    ctx->pc = 0x14D280u;
label_14d280:
    // 0x14d280: 0x8cc201ac  lw          $v0, 0x1AC($a2)
    ctx->pc = 0x14d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
label_14d284:
    // 0x14d284: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14d284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_14d288:
    // 0x14d288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d28c:
    // 0x14d28c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d290:
    // 0x14d290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d294:
    // 0x14d294: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_14d298:
    // 0x14d298: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14d298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14d29c:
    // 0x14d29c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14d2a0:
    if (ctx->pc == 0x14D2A0u) {
        ctx->pc = 0x14D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D29Cu;
        // 0x14d2a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D2A4u;
        goto label_14d2a4;
    }
    ctx->pc = 0x14D29Cu;
    {
        const bool branch_taken_0x14d29c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D29Cu;
        // 0x14d2a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d29c) {
            ctx->pc = 0x14D2B8u;
            goto label_14d2b8;
        }
    }
    ctx->pc = 0x14D2A4u;
label_14d2a4:
    // 0x14d2a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14d2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14d2a8:
    // 0x14d2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_14d2ac:
    // 0x14d2ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d2acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_14d2b0:
    // 0x14d2b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14d2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14d2b4:
    // 0x14d2b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14d2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_14d2b8:
    // 0x14d2b8: 0x8ca23620  lw          $v0, 0x3620($a1)
    ctx->pc = 0x14d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13856)));
label_14d2bc:
    // 0x14d2bc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_14d2c0:
    // 0x14d2c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14d2c4:
    // 0x14d2c4: 0xaca23620  sw          $v0, 0x3620($a1)
    ctx->pc = 0x14d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 13856), GPR_U32(ctx, 2));
label_14d2c8:
    // 0x14d2c8: 0xac62d16c  sw          $v0, -0x2E94($v1)
    ctx->pc = 0x14d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955372), GPR_U32(ctx, 2));
label_14d2cc:
    // 0x14d2cc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14d2d0:
    // 0x14d2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d2d4:
    // 0x14d2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14d2d8:
    // 0x14d2d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d2dc:
    // 0x14d2dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d2e0:
    // 0x14d2e0: 0x60f809  jalr        $v1
label_14d2e4:
    if (ctx->pc == 0x14D2E4u) {
        ctx->pc = 0x14D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2E0u;
        // 0x14d2e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D2E8u;
        goto label_14d2e8;
    }
    ctx->pc = 0x14D2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14D2E8u);
        ctx->pc = 0x14D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2E0u;
        // 0x14d2e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2E0u, 0x14D2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D2E8u;
label_14d2e8:
    // 0x14d2e8: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x14d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14d2ec:
    // 0x14d2ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14d2f0:
    // 0x14d2f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14d2f4:
    // 0x14d2f4: 0xac403630  sw          $zero, 0x3630($v0)
    ctx->pc = 0x14d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13872), GPR_U32(ctx, 0));
label_14d2f8:
    // 0x14d2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d2fc:
    // 0x14d2fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14d300:
    // 0x14d300: 0x3e00008  jr          $ra
label_14d304:
    if (ctx->pc == 0x14D304u) {
        ctx->pc = 0x14D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D300u;
        // 0x14d304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D308u;
        goto label_fallthrough_0x14d300;
    }
    ctx->pc = 0x14D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D300u;
        // 0x14d304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d300:
    ctx->pc = 0x14D308u;
}
