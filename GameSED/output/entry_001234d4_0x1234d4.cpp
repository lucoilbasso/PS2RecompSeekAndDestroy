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

// Function: entry_001234d4
// Address: 0x1234d4 - 0x123528
void entry_001234d4_0x1234d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234d4_0x1234d4");
#endif

    switch (ctx->pc) {
        case 0x1234e4u: goto label_1234e4;
        case 0x12350cu: goto label_12350c;
        default: break;
    }

    ctx->pc = 0x1234d4u;

    // 0x1234d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1234d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1234d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1234d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234dc: 0xc0478ea  jal         func_11E3A8
    ctx->pc = 0x1234DCu;
    SET_GPR_U32(ctx, 31, 0x1234E4u);
    ctx->pc = 0x1234E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234DCu;
    // 0x1234e0: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3A8u, 0x1234DCu, 0x1234E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234E4u;
label_1234e4:
    // 0x1234e4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1234E4u;
    {
        const bool branch_taken_0x1234e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E4u;
        // 0x1234e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234e4) {
            ctx->pc = 0x123618u;
            return;
        }
    }
    ctx->pc = 0x1234ECu;
    // 0x1234ec: 0xae1100d0  sw          $s1, 0xD0($s0)
    ctx->pc = 0x1234ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
    // 0x1234f0: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x1234f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1234f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1234f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1234f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1234fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123500: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x123500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123504: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x123504u;
    SET_GPR_U32(ctx, 31, 0x12350Cu);
    ctx->pc = 0x123508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123504u;
    // 0x123508: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x123504u, 0x12350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12350Cu;
label_12350c:
    // 0x12350c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12350cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123510: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x123510u;
    {
        const bool branch_taken_0x123510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123510u;
        // 0x123514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123510) {
            ctx->pc = 0x123528u;
            return;
        }
    }
    ctx->pc = 0x123518u;
    // 0x123518: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12351c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123520: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x123520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x123524: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x123524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    ctx->pc = 0x123528u;
}
