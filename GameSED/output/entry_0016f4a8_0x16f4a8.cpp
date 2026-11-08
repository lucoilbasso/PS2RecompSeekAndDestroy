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

// Function: entry_0016f4a8
// Address: 0x16f4a8 - 0x16f530
void entry_0016f4a8_0x16f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f4a8_0x16f4a8");
#endif

    switch (ctx->pc) {
        case 0x16f504u: goto label_16f504;
        default: break;
    }

    ctx->pc = 0x16f4a8u;

    // 0x16f4a8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x16f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x16f4ac: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x16f4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x16f4b0: 0xffa600d0  sd          $a2, 0xD0($sp)
    ctx->pc = 0x16f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 6));
    // 0x16f4b4: 0xffa700d8  sd          $a3, 0xD8($sp)
    ctx->pc = 0x16f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x16f4b8: 0xffa800e0  sd          $t0, 0xE0($sp)
    ctx->pc = 0x16f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x16f4bc: 0xffa900e8  sd          $t1, 0xE8($sp)
    ctx->pc = 0x16f4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x16f4c0: 0xffaa00f0  sd          $t2, 0xF0($sp)
    ctx->pc = 0x16f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x16f4c4: 0xffab00f8  sd          $t3, 0xF8($sp)
    ctx->pc = 0x16f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
    // 0x16f4c8: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x16f4c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16f4cc: 0xe7ad00ac  swc1        $f13, 0xAC($sp)
    ctx->pc = 0x16f4ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x16f4d0: 0xe7ae00b0  swc1        $f14, 0xB0($sp)
    ctx->pc = 0x16f4d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16f4d4: 0xe7af00b4  swc1        $f15, 0xB4($sp)
    ctx->pc = 0x16f4d4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x16f4d8: 0xe7b000b8  swc1        $f16, 0xB8($sp)
    ctx->pc = 0x16f4d8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16f4dc: 0xe7b100bc  swc1        $f17, 0xBC($sp)
    ctx->pc = 0x16f4dcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x16f4e0: 0xe7b200c0  swc1        $f18, 0xC0($sp)
    ctx->pc = 0x16f4e0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16f4e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16F4E4u;
    {
        const bool branch_taken_0x16f4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4E4u;
        // 0x16f4e8: 0xe7b300c4  swc1        $f19, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4e4) {
            ctx->pc = 0x16F538u;
            return;
        }
    }
    ctx->pc = 0x16F4ECu;
    // 0x16f4ec: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x16f4f0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f4f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4fc: 0xc066c26  jal         func_19B098
    ctx->pc = 0x16F4FCu;
    SET_GPR_U32(ctx, 31, 0x16F504u);
    ctx->pc = 0x16F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4FCu;
    // 0x16f500: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B098u, 0x16F4FCu, 0x16F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F504u;
label_16f504:
    // 0x16f504: 0x27838b5c  addiu       $v1, $gp, -0x74A4
    ctx->pc = 0x16f504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937436));
    // 0x16f508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f50c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f510: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16f510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f518: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x16f51c: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x16f51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x16f520: 0x24213a00  addiu       $at, $at, 0x3A00
    ctx->pc = 0x16f520u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14848));
    // 0x16f524: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x16f528: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x16F528u;
    SET_GPR_U32(ctx, 31, 0x16F530u);
    ctx->pc = 0x16F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F528u;
    // 0x16f52c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x16F528u, 0x16F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F530u;
}
