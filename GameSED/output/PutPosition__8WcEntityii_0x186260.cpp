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

// Function: PutPosition__8WcEntityii
// Address: 0x186260 - 0x1862d0
void PutPosition__8WcEntityii_0x186260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutPosition__8WcEntityii_0x186260");
#endif

    switch (ctx->pc) {
        case 0x186260u: goto label_186260;
        case 0x186264u: goto label_186264;
        case 0x186268u: goto label_186268;
        case 0x18626cu: goto label_18626c;
        case 0x186270u: goto label_186270;
        case 0x186274u: goto label_186274;
        case 0x186278u: goto label_186278;
        case 0x18627cu: goto label_18627c;
        case 0x186280u: goto label_186280;
        case 0x186284u: goto label_186284;
        case 0x186288u: goto label_186288;
        case 0x18628cu: goto label_18628c;
        case 0x186290u: goto label_186290;
        case 0x186294u: goto label_186294;
        case 0x186298u: goto label_186298;
        case 0x18629cu: goto label_18629c;
        case 0x1862a0u: goto label_1862a0;
        case 0x1862a4u: goto label_1862a4;
        case 0x1862a8u: goto label_1862a8;
        case 0x1862acu: goto label_1862ac;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862b4u: goto label_1862b4;
        case 0x1862b8u: goto label_1862b8;
        case 0x1862bcu: goto label_1862bc;
        case 0x1862c0u: goto label_1862c0;
        case 0x1862c4u: goto label_1862c4;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862ccu: goto label_1862cc;
        default: break;
    }

    ctx->pc = 0x186260u;

label_186260:
    // 0x186260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186264:
    // 0x186264: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x186264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_186268:
    // 0x186268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18626c:
    // 0x18626c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_186270:
    // 0x186270: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_186274:
    // 0x186274: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x186274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_186278:
    // 0x186278: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x186278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_18627c:
    // 0x18627c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x18627cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186280:
    // 0x186280: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x186280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_186284:
    // 0x186284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x186284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186288:
    // 0x186288: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x186288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18628c:
    // 0x18628c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18628cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186290:
    // 0x186290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_186294:
    // 0x186294: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_186298:
    // 0x186298: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18629c:
    // 0x18629c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1862a0:
    // 0x1862a0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1862a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1862a4:
    // 0x1862a4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1862a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1862a8:
    // 0x1862a8: 0x40f809  jalr        $v0
label_1862ac:
    if (ctx->pc == 0x1862ACu) {
        ctx->pc = 0x1862ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862A8u;
        // 0x1862ac: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862B0u;
        goto label_1862b0;
    }
    ctx->pc = 0x1862A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1862B0u);
        ctx->pc = 0x1862ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862A8u;
        // 0x1862ac: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1862A8u, 0x1862B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1862B0u;
label_1862b0:
    // 0x1862b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1862b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1862b4:
    // 0x1862b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1862b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1862b8:
    // 0x1862b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1862b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1862bc:
    // 0x1862bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1862bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1862c0:
    // 0x1862c0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1862c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1862c4:
    // 0x1862c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1862c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1862c8:
    // 0x1862c8: 0x3e00008  jr          $ra
label_1862cc:
    if (ctx->pc == 0x1862CCu) {
        ctx->pc = 0x1862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C8u;
        // 0x1862cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862D0u;
        goto label_fallthrough_0x1862c8;
    }
    ctx->pc = 0x1862C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C8u;
        // 0x1862cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1862C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1862c8:
    ctx->pc = 0x1862D0u;
}
