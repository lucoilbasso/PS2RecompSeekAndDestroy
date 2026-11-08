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

// Function: entry_0016d7c0
// Address: 0x16d7c0 - 0x16d840
void entry_0016d7c0_0x16d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d7c0_0x16d7c0");
#endif

    switch (ctx->pc) {
        case 0x16d7f0u: goto label_16d7f0;
        case 0x16d7f8u: goto label_16d7f8;
        case 0x16d814u: goto label_16d814;
        case 0x16d82cu: goto label_16d82c;
        default: break;
    }

    ctx->pc = 0x16d7c0u;

    // 0x16d7c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x16d7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d7c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d7cc: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x16d7ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d7d0: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x16d7d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d7d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d7d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d7d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d7dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d7dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d7e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d7e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d7e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d7e8: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D7E8u;
    SET_GPR_U32(ctx, 31, 0x16D7F0u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D7E8u, 0x16D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7F0u;
label_16d7f0:
    // 0x16d7f0: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D7F0u;
    SET_GPR_U32(ctx, 31, 0x16D7F8u);
    ctx->pc = 0x16D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7F0u;
    // 0x16d7f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D7F0u, 0x16D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7F8u;
label_16d7f8:
    // 0x16d7f8: 0x24020aaa  addiu       $v0, $zero, 0xAAA
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
    // 0x16d7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d800: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x16d800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x16d804: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x16d804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x16d808: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x16d808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x16d80c: 0xc04c9e8  jal         func_1327A0
    ctx->pc = 0x16D80Cu;
    SET_GPR_U32(ctx, 31, 0x16D814u);
    ctx->pc = 0x16D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D80Cu;
    // 0x16d810: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327A0u, 0x16D80Cu, 0x16D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D814u;
label_16d814:
    // 0x16d814: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x16d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x16d818: 0x240400b3  addiu       $a0, $zero, 0xB3
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x16d81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d824: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D824u;
    SET_GPR_U32(ctx, 31, 0x16D82Cu);
    ctx->pc = 0x16D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D824u;
    // 0x16d828: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D824u, 0x16D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D82Cu;
label_16d82c:
    // 0x16d82c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d82cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d830: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D830u;
    {
        const bool branch_taken_0x16d830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D830u;
        // 0x16d834: 0xae0302d4  sw          $v1, 0x2D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d830) {
            ctx->pc = 0x16D840u;
            return;
        }
    }
    ctx->pc = 0x16D838u;
    // 0x16d838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d83c: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x16d840u;
}
