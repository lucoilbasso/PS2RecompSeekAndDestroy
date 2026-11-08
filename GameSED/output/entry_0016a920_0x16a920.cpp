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

// Function: entry_0016a920
// Address: 0x16a920 - 0x16a95c
void entry_0016a920_0x16a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a920_0x16a920");
#endif

    switch (ctx->pc) {
        case 0x16a958u: goto label_16a958;
        default: break;
    }

    ctx->pc = 0x16a920u;

label_16a920:
    // 0x16a920: 0x8e22120c  lw          $v0, 0x120C($s1)
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4620)));
label_16a924:
    // 0x16a924: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_16a928:
    if (ctx->pc == 0x16A928u) {
        ctx->pc = 0x16A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A924u;
        // 0x16a928: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A92Cu;
        goto label_16a92c;
    }
    ctx->pc = 0x16A924u;
    {
        const bool branch_taken_0x16a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a924) {
            ctx->pc = 0x16A928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A924u;
            // 0x16a928: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A95Cu;
            return;
        }
    }
    ctx->pc = 0x16A92Cu;
label_16a92c:
    // 0x16a92c: 0x8e221210  lw          $v0, 0x1210($s1)
    ctx->pc = 0x16a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4624)));
label_16a930:
    // 0x16a930: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16a930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16a934:
    // 0x16a934: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x16a934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16a938:
    // 0x16a938: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16a93c:
    // 0x16a93c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x16a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16a940:
    // 0x16a940: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16a944:
    // 0x16a944: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_16a948:
    // 0x16a948: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16a948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16a94c:
    // 0x16a94c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16a950:
    // 0x16a950: 0x40f809  jalr        $v0
label_16a954:
    if (ctx->pc == 0x16A954u) {
        ctx->pc = 0x16A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A950u;
        // 0x16a954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A958u;
        goto label_16a958;
    }
    ctx->pc = 0x16A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A958u);
        ctx->pc = 0x16A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A950u;
        // 0x16a954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A950u, 0x16A958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A958u;
label_16a958:
    // 0x16a958: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x16a95cu;
}
