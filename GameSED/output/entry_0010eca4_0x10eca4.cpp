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

// Function: entry_0010eca4
// Address: 0x10eca4 - 0x10ecdc
void entry_0010eca4_0x10eca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eca4_0x10eca4");
#endif

    switch (ctx->pc) {
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecc8u: goto label_10ecc8;
        default: break;
    }

    ctx->pc = 0x10eca4u;

    // 0x10eca4: 0xc061422  jal         func_185088
    ctx->pc = 0x10ECA4u;
    SET_GPR_U32(ctx, 31, 0x10ECACu);
    ctx->pc = 0x10ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECA4u;
    // 0x10eca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x10ECA4u, 0x10ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECACu;
label_10ecac:
    // 0x10ecac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecb0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10ecb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ecb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ecb8: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x10ecbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecc0: 0xc05129a  jal         func_144A68
    ctx->pc = 0x10ECC0u;
    SET_GPR_U32(ctx, 31, 0x10ECC8u);
    ctx->pc = 0x10ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECC0u;
    // 0x10ecc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x10ECC0u, 0x10ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECC8u;
label_10ecc8:
    // 0x10ecc8: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x10ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x10eccc: 0x9082402c  lbu         $v0, 0x402C($a0)
    ctx->pc = 0x10ecccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16428)));
    // 0x10ecd0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x10ECD0u;
    {
        const bool branch_taken_0x10ecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ecd0) {
            ctx->pc = 0x10ECD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ECD0u;
            // 0x10ecd4: 0x8c82402c  lw          $v0, 0x402C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECDCu;
            return;
        }
    }
    ctx->pc = 0x10ECD8u;
    // 0x10ecd8: 0x8c824018  lw          $v0, 0x4018($a0)
    ctx->pc = 0x10ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16408)));
    ctx->pc = 0x10ecdcu;
}
