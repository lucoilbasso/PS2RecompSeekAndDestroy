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

// Function: entry_00129fa8
// Address: 0x129fa8 - 0x129ff0
void entry_00129fa8_0x129fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129fa8_0x129fa8");
#endif

    switch (ctx->pc) {
        case 0x129fb4u: goto label_129fb4;
        case 0x129fd8u: goto label_129fd8;
        default: break;
    }

    ctx->pc = 0x129fa8u;

    // 0x129fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129fac: 0xc04844a  jal         func_121128
    ctx->pc = 0x129FACu;
    SET_GPR_U32(ctx, 31, 0x129FB4u);
    ctx->pc = 0x129FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FACu;
    // 0x129fb0: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x129FACu, 0x129FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FB4u;
label_129fb4:
    // 0x129fb4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x129fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x129fb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x129fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x129fbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fc0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x129fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x129fc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129fc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129fcc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x129fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x129fd0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x129FD0u;
    SET_GPR_U32(ctx, 31, 0x129FD8u);
    ctx->pc = 0x129FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FD0u;
    // 0x129fd4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x129FD0u, 0x129FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fdc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x129fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x129fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129FE0u;
    {
        const bool branch_taken_0x129fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FE0u;
        // 0x129fe4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fe0) {
            ctx->pc = 0x129FF0u;
            return;
        }
    }
    ctx->pc = 0x129FE8u;
    // 0x129fe8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x129fec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x129fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x129ff0u;
}
