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

// Function: Init__8ApcMoverP7ApcUnitP9ApcCqtank
// Address: 0x1db470 - 0x1db50c
void Init__8ApcMoverP7ApcUnitP9ApcCqtank_0x1db470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcMoverP7ApcUnitP9ApcCqtank_0x1db470");
#endif

    switch (ctx->pc) {
        case 0x1db470u: goto label_1db470;
        case 0x1db474u: goto label_1db474;
        case 0x1db478u: goto label_1db478;
        case 0x1db47cu: goto label_1db47c;
        case 0x1db480u: goto label_1db480;
        case 0x1db484u: goto label_1db484;
        case 0x1db488u: goto label_1db488;
        case 0x1db48cu: goto label_1db48c;
        case 0x1db490u: goto label_1db490;
        case 0x1db494u: goto label_1db494;
        case 0x1db498u: goto label_1db498;
        case 0x1db49cu: goto label_1db49c;
        case 0x1db4a0u: goto label_1db4a0;
        case 0x1db4a4u: goto label_1db4a4;
        case 0x1db4a8u: goto label_1db4a8;
        case 0x1db4acu: goto label_1db4ac;
        case 0x1db4b0u: goto label_1db4b0;
        case 0x1db4b4u: goto label_1db4b4;
        case 0x1db4b8u: goto label_1db4b8;
        case 0x1db4bcu: goto label_1db4bc;
        case 0x1db4c0u: goto label_1db4c0;
        case 0x1db4c4u: goto label_1db4c4;
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4ccu: goto label_1db4cc;
        case 0x1db4d0u: goto label_1db4d0;
        case 0x1db4d4u: goto label_1db4d4;
        case 0x1db4d8u: goto label_1db4d8;
        case 0x1db4dcu: goto label_1db4dc;
        case 0x1db4e0u: goto label_1db4e0;
        case 0x1db4e4u: goto label_1db4e4;
        case 0x1db4e8u: goto label_1db4e8;
        case 0x1db4ecu: goto label_1db4ec;
        case 0x1db4f0u: goto label_1db4f0;
        case 0x1db4f4u: goto label_1db4f4;
        case 0x1db4f8u: goto label_1db4f8;
        case 0x1db4fcu: goto label_1db4fc;
        case 0x1db500u: goto label_1db500;
        case 0x1db504u: goto label_1db504;
        case 0x1db508u: goto label_1db508;
        default: break;
    }

    ctx->pc = 0x1db470u;

label_1db470:
    // 0x1db470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1db474:
    // 0x1db474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1db478:
    // 0x1db478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db47c:
    // 0x1db47c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1db480:
    // 0x1db480: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db484:
    // 0x1db484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1db488:
    // 0x1db488: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1db48c:
    // 0x1db48c: 0xc061258  jal         func_184960
label_1db490:
    if (ctx->pc == 0x1DB490u) {
        ctx->pc = 0x1DB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB48Cu;
        // 0x1db490: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB494u;
        goto label_1db494;
    }
    ctx->pc = 0x1DB48Cu;
    SET_GPR_U32(ctx, 31, 0x1DB494u);
    ctx->pc = 0x1DB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB48Cu;
    // 0x1db490: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DB48Cu, 0x1DB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB494u;
label_1db494:
    // 0x1db494: 0xc7808504  lwc1        $f0, -0x7AFC($gp)
    ctx->pc = 0x1db494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db498:
    // 0x1db498: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x1db498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1db49c:
    // 0x1db49c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1db49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1db4a0:
    // 0x1db4a0: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1db4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1db4a4:
    // 0x1db4a4: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1db4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1db4a8:
    // 0x1db4a8: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x1db4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_1db4ac:
    // 0x1db4ac: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1db4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1db4b0:
    // 0x1db4b0: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1db4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1db4b4:
    // 0x1db4b4: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1db4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1db4b8:
    // 0x1db4b8: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1db4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1db4bc:
    // 0x1db4bc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1db4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1db4c0:
    // 0x1db4c0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db4c4:
    // 0x1db4c4: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1db4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1db4c8:
    // 0x1db4c8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1db4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db4cc:
    // 0x1db4cc: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1db4d0:
    // 0x1db4d0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db4d4:
    // 0x1db4d4: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1db4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1db4d8:
    // 0x1db4d8: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1db4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db4dc:
    // 0x1db4dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1db4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1db4e0:
    // 0x1db4e0: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1db4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1db4e4:
    // 0x1db4e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db4e8:
    // 0x1db4e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db4ec:
    // 0x1db4ec: 0x60f809  jalr        $v1
label_1db4f0:
    if (ctx->pc == 0x1DB4F0u) {
        ctx->pc = 0x1DB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4ECu;
        // 0x1db4f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4F4u;
        goto label_1db4f4;
    }
    ctx->pc = 0x1DB4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB4F4u);
        ctx->pc = 0x1DB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4ECu;
        // 0x1db4f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB4ECu, 0x1DB4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB4F4u;
label_1db4f4:
    // 0x1db4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db4f8:
    // 0x1db4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1db4fc:
    // 0x1db4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db500:
    // 0x1db500: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db504:
    // 0x1db504: 0x3e00008  jr          $ra
label_1db508:
    if (ctx->pc == 0x1DB508u) {
        ctx->pc = 0x1DB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB504u;
        // 0x1db508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB50Cu;
        goto label_fallthrough_0x1db504;
    }
    ctx->pc = 0x1DB504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB504u;
        // 0x1db508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db504:
    ctx->pc = 0x1DB50Cu;
}
