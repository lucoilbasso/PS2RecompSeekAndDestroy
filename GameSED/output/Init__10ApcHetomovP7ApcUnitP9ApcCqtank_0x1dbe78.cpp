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

// Function: Init__10ApcHetomovP7ApcUnitP9ApcCqtank
// Address: 0x1dbe78 - 0x1dbf24
void Init__10ApcHetomovP7ApcUnitP9ApcCqtank_0x1dbe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__10ApcHetomovP7ApcUnitP9ApcCqtank_0x1dbe78");
#endif

    switch (ctx->pc) {
        case 0x1dbe78u: goto label_1dbe78;
        case 0x1dbe7cu: goto label_1dbe7c;
        case 0x1dbe80u: goto label_1dbe80;
        case 0x1dbe84u: goto label_1dbe84;
        case 0x1dbe88u: goto label_1dbe88;
        case 0x1dbe8cu: goto label_1dbe8c;
        case 0x1dbe90u: goto label_1dbe90;
        case 0x1dbe94u: goto label_1dbe94;
        case 0x1dbe98u: goto label_1dbe98;
        case 0x1dbe9cu: goto label_1dbe9c;
        case 0x1dbea0u: goto label_1dbea0;
        case 0x1dbea4u: goto label_1dbea4;
        case 0x1dbea8u: goto label_1dbea8;
        case 0x1dbeacu: goto label_1dbeac;
        case 0x1dbeb0u: goto label_1dbeb0;
        case 0x1dbeb4u: goto label_1dbeb4;
        case 0x1dbeb8u: goto label_1dbeb8;
        case 0x1dbebcu: goto label_1dbebc;
        case 0x1dbec0u: goto label_1dbec0;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbec8u: goto label_1dbec8;
        case 0x1dbeccu: goto label_1dbecc;
        case 0x1dbed0u: goto label_1dbed0;
        case 0x1dbed4u: goto label_1dbed4;
        case 0x1dbed8u: goto label_1dbed8;
        case 0x1dbedcu: goto label_1dbedc;
        case 0x1dbee0u: goto label_1dbee0;
        case 0x1dbee4u: goto label_1dbee4;
        case 0x1dbee8u: goto label_1dbee8;
        case 0x1dbeecu: goto label_1dbeec;
        case 0x1dbef0u: goto label_1dbef0;
        case 0x1dbef4u: goto label_1dbef4;
        case 0x1dbef8u: goto label_1dbef8;
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf00u: goto label_1dbf00;
        case 0x1dbf04u: goto label_1dbf04;
        case 0x1dbf08u: goto label_1dbf08;
        case 0x1dbf0cu: goto label_1dbf0c;
        case 0x1dbf10u: goto label_1dbf10;
        case 0x1dbf14u: goto label_1dbf14;
        case 0x1dbf18u: goto label_1dbf18;
        case 0x1dbf1cu: goto label_1dbf1c;
        case 0x1dbf20u: goto label_1dbf20;
        default: break;
    }

    ctx->pc = 0x1dbe78u;

label_1dbe78:
    // 0x1dbe78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dbe7c:
    // 0x1dbe7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dbe80:
    // 0x1dbe80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe84:
    // 0x1dbe84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dbe88:
    // 0x1dbe88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbe88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe8c:
    // 0x1dbe8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1dbe90:
    // 0x1dbe90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dbe90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe94:
    // 0x1dbe94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1dbe98:
    // 0x1dbe98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dbe9c:
    // 0x1dbe9c: 0xc061258  jal         func_184960
label_1dbea0:
    if (ctx->pc == 0x1DBEA0u) {
        ctx->pc = 0x1DBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE9Cu;
        // 0x1dbea0: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEA4u;
        goto label_1dbea4;
    }
    ctx->pc = 0x1DBE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DBEA4u);
    ctx->pc = 0x1DBEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE9Cu;
    // 0x1dbea0: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DBE9Cu, 0x1DBEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEA4u;
label_1dbea4:
    // 0x1dbea4: 0xc7808534  lwc1        $f0, -0x7ACC($gp)
    ctx->pc = 0x1dbea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbea8:
    // 0x1dbea8: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1dbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1dbeac:
    // 0x1dbeac: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1dbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1dbeb0:
    // 0x1dbeb0: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1dbeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1dbeb4:
    // 0x1dbeb4: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x1dbeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_1dbeb8:
    // 0x1dbeb8: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1dbeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1dbebc:
    // 0x1dbebc: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dbebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dbec0:
    // 0x1dbec0: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1dbec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1dbec4:
    // 0x1dbec4: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1dbec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1dbec8:
    // 0x1dbec8: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1dbec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1dbecc:
    // 0x1dbecc: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbeccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbed0:
    // 0x1dbed0: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1dbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1dbed4:
    // 0x1dbed4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1dbed4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbed8:
    // 0x1dbed8: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1dbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1dbedc:
    // 0x1dbedc: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbedcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbee0:
    // 0x1dbee0: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1dbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1dbee4:
    // 0x1dbee4: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1dbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbee8:
    // 0x1dbee8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dbeec:
    // 0x1dbeec: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1dbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1dbef0:
    // 0x1dbef0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dbef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbef4:
    // 0x1dbef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dbef8:
    // 0x1dbef8: 0x60f809  jalr        $v1
label_1dbefc:
    if (ctx->pc == 0x1DBEFCu) {
        ctx->pc = 0x1DBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEF8u;
        // 0x1dbefc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF00u;
        goto label_1dbf00;
    }
    ctx->pc = 0x1DBEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DBF00u);
        ctx->pc = 0x1DBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEF8u;
        // 0x1dbefc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBEF8u, 0x1DBF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBF00u;
label_1dbf00:
    // 0x1dbf00: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dbf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dbf04:
    // 0x1dbf04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbf04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dbf08:
    // 0x1dbf08: 0xaf908b54  sw          $s0, -0x74AC($gp)
    ctx->pc = 0x1dbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 16));
label_1dbf0c:
    // 0x1dbf0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbf0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbf10:
    // 0x1dbf10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbf10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbf14:
    // 0x1dbf14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbf14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dbf18:
    // 0x1dbf18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbf1c:
    // 0x1dbf1c: 0x3e00008  jr          $ra
label_1dbf20:
    if (ctx->pc == 0x1DBF20u) {
        ctx->pc = 0x1DBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF1Cu;
        // 0x1dbf20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF24u;
        goto label_fallthrough_0x1dbf1c;
    }
    ctx->pc = 0x1DBF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF1Cu;
        // 0x1dbf20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbf1c:
    ctx->pc = 0x1DBF24u;
}
