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

// Function: MipmapLength__8WcObjectf
// Address: 0x1dfce0 - 0x1dfd14
void MipmapLength__8WcObjectf_0x1dfce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MipmapLength__8WcObjectf_0x1dfce0");
#endif

    switch (ctx->pc) {
        case 0x1dfcfcu: goto label_1dfcfc;
        default: break;
    }

    ctx->pc = 0x1dfce0u;

    // 0x1dfce0: 0xc78085b8  lwc1        $f0, -0x7A48($gp)
    ctx->pc = 0x1dfce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dfcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dfcf4: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x1DFCF4u;
    SET_GPR_U32(ctx, 31, 0x1DFCFCu);
    ctx->pc = 0x1DFCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCF4u;
    // 0x1dfcf8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x1DFCF4u, 0x1DFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCFCu;
label_1dfcfc:
    // 0x1dfcfc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1dfd00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dfd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfd04: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1dfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1dfd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD0Cu;
        // 0x1dfd10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD14u;
}
