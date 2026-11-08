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

// Function: entry_0010cf68
// Address: 0x10cf68 - 0x10cfe8
void entry_0010cf68_0x10cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cf68_0x10cf68");
#endif

    switch (ctx->pc) {
        case 0x10cf70u: goto label_10cf70;
        case 0x10cf78u: goto label_10cf78;
        case 0x10cf90u: goto label_10cf90;
        case 0x10cfd0u: goto label_10cfd0;
        default: break;
    }

    ctx->pc = 0x10cf68u;

    // 0x10cf68: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10CF68u;
    SET_GPR_U32(ctx, 31, 0x10CF70u);
    ctx->pc = 0x10CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF68u;
    // 0x10cf6c: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10CF68u, 0x10CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF70u;
label_10cf70:
    // 0x10cf70: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10CF70u;
    SET_GPR_U32(ctx, 31, 0x10CF78u);
    ctx->pc = 0x10CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF70u;
    // 0x10cf74: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10CF70u, 0x10CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF78u;
label_10cf78:
    // 0x10cf78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf7c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10cf80: 0x2442e6e0  addiu       $v0, $v0, -0x1920
    ctx->pc = 0x10cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x10cf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf88: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x10CF88u;
    SET_GPR_U32(ctx, 31, 0x10CF90u);
    ctx->pc = 0x10CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF88u;
    // 0x10cf8c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x10CF88u, 0x10CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF90u;
label_10cf90:
    // 0x10cf90: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x10cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x10cf94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10cf98: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10cf9c: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x10cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x10cfa0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10cfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10cfa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10cfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cfa8: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x10cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x10cfac: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x10cfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x10cfb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cfb4: 0xe60101d4  swc1        $f1, 0x1D4($s0)
    ctx->pc = 0x10cfb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
    // 0x10cfb8: 0xe60001d8  swc1        $f0, 0x1D8($s0)
    ctx->pc = 0x10cfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
    // 0x10cfbc: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x10cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x10cfc0: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10CFC0u;
    {
        const bool branch_taken_0x10cfc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cfc0) {
            ctx->pc = 0x10CFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFC0u;
            // 0x10cfc4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CFE8u;
            return;
        }
    }
    ctx->pc = 0x10CFC8u;
    // 0x10cfc8: 0xc061cb0  jal         func_1872C0
    ctx->pc = 0x10CFC8u;
    SET_GPR_U32(ctx, 31, 0x10CFD0u);
    ctx->pc = 0x1872C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872C0u, 0x10CFC8u, 0x10CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFD0u;
label_10cfd0:
    // 0x10cfd0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x10cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x10cfd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfd8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x10cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x10cfdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10cfe0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x10cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x10cfe4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x10cfe8u;
}
