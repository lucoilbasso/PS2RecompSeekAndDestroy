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

// Function: _sprintf_r
// Address: 0x1d06f0 - 0x1d0778
void _sprintf_r_0x1d06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sprintf_r_0x1d06f0");
#endif

    switch (ctx->pc) {
        case 0x1d0764u: goto label_1d0764;
        default: break;
    }

    ctx->pc = 0x1d06f0u;

    // 0x1d06f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d06f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1d06f4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1d06f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1d06f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d06fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d06fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0700: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1d0700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1d0704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0708: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d0708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d070c: 0x240c0208  addiu       $t4, $zero, 0x208
    ctx->pc = 0x1d070cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1d0710: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1d0714: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d0718: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1d071c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d0720: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x1d0720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x1d0724: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x1d0724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x1d0728: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x1d0728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x1d072c: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x1d072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x1d0730: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x1d0730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x1d0734: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x1d0734u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d0738: 0xe7ad007c  swc1        $f13, 0x7C($sp)
    ctx->pc = 0x1d0738u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1d073c: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x1d073cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d0740: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x1d0740u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d0744: 0xe7b00088  swc1        $f16, 0x88($sp)
    ctx->pc = 0x1d0744u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d0748: 0xe7b1008c  swc1        $f17, 0x8C($sp)
    ctx->pc = 0x1d0748u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1d074c: 0xe7b20090  swc1        $f18, 0x90($sp)
    ctx->pc = 0x1d074cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d0750: 0xe7b30094  swc1        $f19, 0x94($sp)
    ctx->pc = 0x1d0750u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d0754: 0xa7ac000c  sh          $t4, 0xC($sp)
    ctx->pc = 0x1d0754u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 12));
    // 0x1d0758: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d0758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d075c: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D075Cu;
    SET_GPR_U32(ctx, 31, 0x1D0764u);
    ctx->pc = 0x1D0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D075Cu;
    // 0x1d0760: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D075Cu, 0x1D0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0764u;
label_1d0764:
    // 0x1d0764: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d0764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0768: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d0768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d076c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1d076cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0770: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0770u;
        // 0x1d0774: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0778u;
}
