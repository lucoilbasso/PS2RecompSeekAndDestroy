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

// Function: Cmd_EFFECT_STUNGUN_POS_SET_Entry__FP15BsSCDEntControl
// Address: 0x1315c0 - 0x1316b0
void Cmd_EFFECT_STUNGUN_POS_SET_Entry__FP15BsSCDEntControl_0x1315c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_STUNGUN_POS_SET_Entry__FP15BsSCDEntControl_0x1315c0");
#endif

    switch (ctx->pc) {
        case 0x131600u: goto label_131600;
        case 0x131648u: goto label_131648;
        case 0x131660u: goto label_131660;
        default: break;
    }

    ctx->pc = 0x1315c0u;

    // 0x1315c0: 0x8f828a08  lw          $v0, -0x75F8($gp)
    ctx->pc = 0x1315c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x1315c4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1315c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1315c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1315cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1315ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1315D0u;
    {
        const bool branch_taken_0x1315d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1315D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315D0u;
        // 0x1315d4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315d0) {
            ctx->pc = 0x1316A0u;
            goto label_1316a0;
        }
    }
    ctx->pc = 0x1315D8u;
    // 0x1315d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1315d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315dc: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x1315dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    // 0x1315e0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1315e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1315e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1315e8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1315e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1315ec: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1315ECu;
    {
        const bool branch_taken_0x1315ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1315ec) {
            ctx->pc = 0x1315F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1315ECu;
            // 0x1315f0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131608u;
            goto label_131608;
        }
    }
    ctx->pc = 0x1315F4u;
    // 0x1315f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1315f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315f8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1315F8u;
    SET_GPR_U32(ctx, 31, 0x131600u);
    ctx->pc = 0x1315FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315F8u;
    // 0x1315fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1315F8u, 0x131600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131600u;
label_131600:
    // 0x131600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131600u;
    {
        const bool branch_taken_0x131600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131600u;
        // 0x131604: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131600) {
            ctx->pc = 0x131620u;
            goto label_131620;
        }
    }
    ctx->pc = 0x131608u;
label_131608:
    // 0x131608: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x131608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x13160c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x13160cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131610: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x131610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x131614: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x131614u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131618: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x131618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x13161c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_131620:
    // 0x131620: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x131620u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x131624: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x131624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131628: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x131628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13162c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13162cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x131630: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x131630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131634: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x131634u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131638: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x131638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13163c: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x13163cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x131640: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x131640u;
    SET_GPR_U32(ctx, 31, 0x131648u);
    ctx->pc = 0x131644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131640u;
    // 0x131644: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x131640u, 0x131648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131648u;
label_131648:
    // 0x131648: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x131648u;
    {
        const bool branch_taken_0x131648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131648) {
            ctx->pc = 0x13164Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131648u;
            // 0x13164c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1316A4u;
            goto label_1316a4;
        }
    }
    ctx->pc = 0x131650u;
    // 0x131650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x131650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131658: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x13165c: 0x0  nop
    ctx->pc = 0x13165cu;
    // NOP
label_131660:
    // 0x131660: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x131660u;
    {
        const bool branch_taken_0x131660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x131660) {
            ctx->pc = 0x131664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131660u;
            // 0x131664: 0x8e100054  lw          $s0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131698u;
            goto label_131698;
        }
    }
    ctx->pc = 0x131668u;
    // 0x131668: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x131668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13166c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x13166cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x131670: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x131670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131674: 0xae0400f0  sw          $a0, 0xF0($s0)
    ctx->pc = 0x131674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
    // 0x131678: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x131678u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x13167c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x13167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131680: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x131680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x131684: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x131684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131688: 0xe6010100  swc1        $f1, 0x100($s0)
    ctx->pc = 0x131688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x13168c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x13168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131690: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x131690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x131694: 0x8e100054  lw          $s0, 0x54($s0)
    ctx->pc = 0x131694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_131698:
    // 0x131698: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x131698u;
    {
        const bool branch_taken_0x131698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x131698) {
            ctx->pc = 0x13169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131698u;
            // 0x13169c: 0x8e0200ec  lw          $v0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131660;
        }
    }
    ctx->pc = 0x1316A0u;
label_1316a0:
    // 0x1316a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1316a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1316a4:
    // 0x1316a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1316a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1316a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1316A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316A8u;
        // 0x1316ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1316A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1316B0u;
}
