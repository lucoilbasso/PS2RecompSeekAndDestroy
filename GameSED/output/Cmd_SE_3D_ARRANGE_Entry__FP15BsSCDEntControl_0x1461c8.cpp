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

// Function: Cmd_SE_3D_ARRANGE_Entry__FP15BsSCDEntControl
// Address: 0x1461c8 - 0x14624c
void Cmd_SE_3D_ARRANGE_Entry__FP15BsSCDEntControl_0x1461c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_3D_ARRANGE_Entry__FP15BsSCDEntControl_0x1461c8");
#endif

    switch (ctx->pc) {
        case 0x1461f4u: goto label_1461f4;
        case 0x146214u: goto label_146214;
        case 0x146230u: goto label_146230;
        default: break;
    }

    ctx->pc = 0x1461c8u;

    // 0x1461c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1461c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1461cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1461ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1461d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1461d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1461d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1461d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1461d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461dc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1461dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1461e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1461e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1461e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1461e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1461e8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1461ec: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1461ECu;
    SET_GPR_U32(ctx, 31, 0x1461F4u);
    ctx->pc = 0x1461F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461ECu;
    // 0x1461f0: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1461ECu, 0x1461F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461F4u;
label_1461f4:
    // 0x1461f4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1461f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1461fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1461fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x146200: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146204: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146204u;
    {
        const bool branch_taken_0x146204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x146208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146204u;
        // 0x146208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146204) {
            ctx->pc = 0x146218u;
            goto label_146218;
        }
    }
    ctx->pc = 0x14620Cu;
    // 0x14620c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14620Cu;
    SET_GPR_U32(ctx, 31, 0x146214u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14620Cu, 0x146214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146214u;
label_146214:
    // 0x146214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146218:
    // 0x146218: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x146218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14621c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146220: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x146220u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x146224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x146224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x146228: 0xc0514c2  jal         func_145308
    ctx->pc = 0x146228u;
    SET_GPR_U32(ctx, 31, 0x146230u);
    ctx->pc = 0x14622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146228u;
    // 0x14622c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x146228u, 0x146230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146230u;
label_146230:
    // 0x146230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x146238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14623c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14623cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x146240: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x146240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x146244: 0x3e00008  jr          $ra
    ctx->pc = 0x146244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146244u;
        // 0x146248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14624Cu;
}
