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

// Function: entry_0016d734
// Address: 0x16d734 - 0x16d7c0
void entry_0016d734_0x16d734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d734_0x16d734");
#endif

    switch (ctx->pc) {
        case 0x16d76cu: goto label_16d76c;
        case 0x16d778u: goto label_16d778;
        case 0x16d794u: goto label_16d794;
        case 0x16d7acu: goto label_16d7ac;
        default: break;
    }

    ctx->pc = 0x16d734u;

    // 0x16d734: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x16d738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d73c: 0xc79684a0  lwc1        $f22, -0x7B60($gp)
    ctx->pc = 0x16d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16d740: 0xc79584a4  lwc1        $f21, -0x7B5C($gp)
    ctx->pc = 0x16d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16d744: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d748: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x16d748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d74c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x16d74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d750: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d754: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d754u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d758: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d758u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d75c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d75cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d760: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d764: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D764u;
    SET_GPR_U32(ctx, 31, 0x16D76Cu);
    ctx->pc = 0x16D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D764u;
    // 0x16d768: 0x2413071c  addiu       $s3, $zero, 0x71C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D764u, 0x16D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D76Cu;
label_16d76c:
    // 0x16d76c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d770: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D770u;
    SET_GPR_U32(ctx, 31, 0x16D778u);
    ctx->pc = 0x16D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D770u;
    // 0x16d774: 0x24124000  addiu       $s2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D770u, 0x16D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D778u;
label_16d778:
    // 0x16d778: 0x2402f556  addiu       $v0, $zero, -0xAAA
    ctx->pc = 0x16d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964566));
    // 0x16d77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d780: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x16d780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x16d784: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x16d784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x16d788: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x16d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x16d78c: 0xc04c9e8  jal         func_1327A0
    ctx->pc = 0x16D78Cu;
    SET_GPR_U32(ctx, 31, 0x16D794u);
    ctx->pc = 0x16D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D78Cu;
    // 0x16d790: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327A0u, 0x16D78Cu, 0x16D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D794u;
label_16d794:
    // 0x16d794: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x16d798: 0x240400b3  addiu       $a0, $zero, 0xB3
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x16d79c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7a4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D7A4u;
    SET_GPR_U32(ctx, 31, 0x16D7ACu);
    ctx->pc = 0x16D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7A4u;
    // 0x16d7a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D7A4u, 0x16D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7ACu;
label_16d7ac:
    // 0x16d7ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d7acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D7B0u;
    {
        const bool branch_taken_0x16d7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7B0u;
        // 0x16d7b4: 0xae0302d0  sw          $v1, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7b0) {
            ctx->pc = 0x16D7C0u;
            return;
        }
    }
    ctx->pc = 0x16D7B8u;
    // 0x16d7b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d7bc: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x16d7c0u;
}
