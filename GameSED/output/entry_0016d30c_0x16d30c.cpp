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

// Function: entry_0016d30c
// Address: 0x16d30c - 0x16d3d4
void entry_0016d30c_0x16d30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d30c_0x16d30c");
#endif

    switch (ctx->pc) {
        case 0x16d318u: goto label_16d318;
        case 0x16d324u: goto label_16d324;
        case 0x16d330u: goto label_16d330;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d39cu: goto label_16d39c;
        default: break;
    }

    ctx->pc = 0x16d30cu;

    // 0x16d30c: 0xae2202bc  sw          $v0, 0x2BC($s1)
    ctx->pc = 0x16d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
    // 0x16d310: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16D310u;
    SET_GPR_U32(ctx, 31, 0x16D318u);
    ctx->pc = 0x16D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D310u;
    // 0x16d314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D310u, 0x16D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D318u;
label_16d318:
    // 0x16d318: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d31c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16D31Cu;
    SET_GPR_U32(ctx, 31, 0x16D324u);
    ctx->pc = 0x16D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D31Cu;
    // 0x16d320: 0xe62002c0  swc1        $f0, 0x2C0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D31Cu, 0x16D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D324u;
label_16d324:
    // 0x16d324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d328: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16D328u;
    SET_GPR_U32(ctx, 31, 0x16D330u);
    ctx->pc = 0x16D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D328u;
    // 0x16d32c: 0xe62002c4  swc1        $f0, 0x2C4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D328u, 0x16D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D330u;
label_16d330:
    // 0x16d330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d334: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16D334u;
    SET_GPR_U32(ctx, 31, 0x16D33Cu);
    ctx->pc = 0x16D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D334u;
    // 0x16d338: 0xe62002c8  swc1        $f0, 0x2C8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D334u, 0x16D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D33Cu;
label_16d33c:
    // 0x16d33c: 0xc62302c0  lwc1        $f3, 0x2C0($s1)
    ctx->pc = 0x16d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16d340: 0x46000140  add.s       $f5, $f0, $f0
    ctx->pc = 0x16d340u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x16d344: 0xc7818494  lwc1        $f1, -0x7B6C($gp)
    ctx->pc = 0x16d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d348: 0xc62402c4  lwc1        $f4, 0x2C4($s1)
    ctx->pc = 0x16d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16d34c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16d350: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x16d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16d354: 0x0  nop
    ctx->pc = 0x16d354u;
    // NOP
    // 0x16d358: 0x0  nop
    ctx->pc = 0x16d358u;
    // NOP
    // 0x16d35c: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x16d35cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x16d360: 0xe62002cc  swc1        $f0, 0x2CC($s1)
    ctx->pc = 0x16d360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
    // 0x16d364: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16d368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d36c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16d36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x16d370: 0x2450ed50  addiu       $s0, $v0, -0x12B0
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    // 0x16d374: 0x0  nop
    ctx->pc = 0x16d374u;
    // NOP
    // 0x16d378: 0x0  nop
    ctx->pc = 0x16d378u;
    // NOP
    // 0x16d37c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x16d37cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16d380: 0xe62302d0  swc1        $f3, 0x2D0($s1)
    ctx->pc = 0x16d380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x16d384: 0x0  nop
    ctx->pc = 0x16d384u;
    // NOP
    // 0x16d388: 0x0  nop
    ctx->pc = 0x16d388u;
    // NOP
    // 0x16d38c: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x16d38cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    // 0x16d390: 0xe62102d4  swc1        $f1, 0x2D4($s1)
    ctx->pc = 0x16d390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x16d394: 0xc06164c  jal         func_185930
    ctx->pc = 0x16D394u;
    SET_GPR_U32(ctx, 31, 0x16D39Cu);
    ctx->pc = 0x16D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D394u;
    // 0x16d398: 0xe62202d8  swc1        $f2, 0x2D8($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16D394u, 0x16D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D39Cu;
label_16d39c:
    // 0x16d39c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16d3a4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D3A4u;
    {
        const bool branch_taken_0x16d3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3A4u;
        // 0x16d3a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3a4) {
            ctx->pc = 0x16D3D4u;
            return;
        }
    }
    ctx->pc = 0x16D3ACu;
    // 0x16d3ac: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x16d3acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d3b0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x16d3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16d3b4: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x16d3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d3b8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16d3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16d3bc: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x16d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
    // 0x16d3c0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x16d3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d3c4: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x16d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
    // 0x16d3c8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x16d3cc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16d3d0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x16d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x16d3d4u;
}
