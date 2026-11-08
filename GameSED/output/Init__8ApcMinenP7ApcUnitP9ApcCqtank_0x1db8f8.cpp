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

// Function: Init__8ApcMinenP7ApcUnitP9ApcCqtank
// Address: 0x1db8f8 - 0x1db9a8
void Init__8ApcMinenP7ApcUnitP9ApcCqtank_0x1db8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcMinenP7ApcUnitP9ApcCqtank_0x1db8f8");
#endif

    switch (ctx->pc) {
        case 0x1db8f8u: goto label_1db8f8;
        case 0x1db8fcu: goto label_1db8fc;
        case 0x1db900u: goto label_1db900;
        case 0x1db904u: goto label_1db904;
        case 0x1db908u: goto label_1db908;
        case 0x1db90cu: goto label_1db90c;
        case 0x1db910u: goto label_1db910;
        case 0x1db914u: goto label_1db914;
        case 0x1db918u: goto label_1db918;
        case 0x1db91cu: goto label_1db91c;
        case 0x1db920u: goto label_1db920;
        case 0x1db924u: goto label_1db924;
        case 0x1db928u: goto label_1db928;
        case 0x1db92cu: goto label_1db92c;
        case 0x1db930u: goto label_1db930;
        case 0x1db934u: goto label_1db934;
        case 0x1db938u: goto label_1db938;
        case 0x1db93cu: goto label_1db93c;
        case 0x1db940u: goto label_1db940;
        case 0x1db944u: goto label_1db944;
        case 0x1db948u: goto label_1db948;
        case 0x1db94cu: goto label_1db94c;
        case 0x1db950u: goto label_1db950;
        case 0x1db954u: goto label_1db954;
        case 0x1db958u: goto label_1db958;
        case 0x1db95cu: goto label_1db95c;
        case 0x1db960u: goto label_1db960;
        case 0x1db964u: goto label_1db964;
        case 0x1db968u: goto label_1db968;
        case 0x1db96cu: goto label_1db96c;
        case 0x1db970u: goto label_1db970;
        case 0x1db974u: goto label_1db974;
        case 0x1db978u: goto label_1db978;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db980u: goto label_1db980;
        case 0x1db984u: goto label_1db984;
        case 0x1db988u: goto label_1db988;
        case 0x1db98cu: goto label_1db98c;
        case 0x1db990u: goto label_1db990;
        case 0x1db994u: goto label_1db994;
        case 0x1db998u: goto label_1db998;
        case 0x1db99cu: goto label_1db99c;
        case 0x1db9a0u: goto label_1db9a0;
        case 0x1db9a4u: goto label_1db9a4;
        default: break;
    }

    ctx->pc = 0x1db8f8u;

label_1db8f8:
    // 0x1db8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1db8fc:
    // 0x1db8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1db900:
    // 0x1db900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db904:
    // 0x1db904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1db908:
    // 0x1db908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db90c:
    // 0x1db90c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1db910:
    // 0x1db910: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1db910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db914:
    // 0x1db914: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1db914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1db918:
    // 0x1db918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1db91c:
    // 0x1db91c: 0xc061258  jal         func_184960
label_1db920:
    if (ctx->pc == 0x1DB920u) {
        ctx->pc = 0x1DB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB91Cu;
        // 0x1db920: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB924u;
        goto label_1db924;
    }
    ctx->pc = 0x1DB91Cu;
    SET_GPR_U32(ctx, 31, 0x1DB924u);
    ctx->pc = 0x1DB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB91Cu;
    // 0x1db920: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DB91Cu, 0x1DB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB924u;
label_1db924:
    // 0x1db924: 0xc7808510  lwc1        $f0, -0x7AF0($gp)
    ctx->pc = 0x1db924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db928:
    // 0x1db928: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1db928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1db92c:
    // 0x1db92c: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1db92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1db930:
    // 0x1db930: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1db930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1db934:
    // 0x1db934: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x1db934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_1db938:
    // 0x1db938: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1db938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1db93c:
    // 0x1db93c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1db93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1db940:
    // 0x1db940: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1db940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1db944:
    // 0x1db944: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1db944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1db948:
    // 0x1db948: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1db948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1db94c:
    // 0x1db94c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db94cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db950:
    // 0x1db950: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1db950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1db954:
    // 0x1db954: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1db954u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db958:
    // 0x1db958: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1db95c:
    // 0x1db95c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db95cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db960:
    // 0x1db960: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1db964:
    // 0x1db964: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1db964u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db968:
    // 0x1db968: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1db968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1db96c:
    // 0x1db96c: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1db970:
    // 0x1db970: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db974:
    // 0x1db974: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db978:
    // 0x1db978: 0x60f809  jalr        $v1
label_1db97c:
    if (ctx->pc == 0x1DB97Cu) {
        ctx->pc = 0x1DB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB978u;
        // 0x1db97c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB980u;
        goto label_1db980;
    }
    ctx->pc = 0x1DB978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB980u);
        ctx->pc = 0x1DB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB978u;
        // 0x1db97c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB978u, 0x1DB980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB980u;
label_1db980:
    // 0x1db980: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1db980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1db984:
    // 0x1db984: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1db984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_1db988:
    // 0x1db988: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1db988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
label_1db98c:
    // 0x1db98c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1db990:
    // 0x1db990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db994:
    // 0x1db994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db998:
    // 0x1db998: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1db998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db99c:
    // 0x1db99c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1db9a0:
    // 0x1db9a0: 0x3e00008  jr          $ra
label_1db9a4:
    if (ctx->pc == 0x1DB9A4u) {
        ctx->pc = 0x1DB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9A0u;
        // 0x1db9a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9A8u;
        goto label_fallthrough_0x1db9a0;
    }
    ctx->pc = 0x1DB9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9A0u;
        // 0x1db9a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db9a0:
    ctx->pc = 0x1DB9A8u;
}
