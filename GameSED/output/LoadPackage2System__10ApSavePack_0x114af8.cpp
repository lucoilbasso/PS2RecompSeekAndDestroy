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

// Function: LoadPackage2System__10ApSavePack
// Address: 0x114af8 - 0x114ca4
void LoadPackage2System__10ApSavePack_0x114af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPackage2System__10ApSavePack_0x114af8");
#endif

    switch (ctx->pc) {
        case 0x114b78u: goto label_114b78;
        case 0x114bb8u: goto label_114bb8;
        case 0x114c1cu: goto label_114c1c;
        case 0x114c74u: goto label_114c74;
        case 0x114c88u: goto label_114c88;
        default: break;
    }

    ctx->pc = 0x114af8u;

    // 0x114af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114afc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x114b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114b10: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x114b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x114b14: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x114b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x114b18: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x114b18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x114b1c: 0xae033624  sw          $v1, 0x3624($s0)
    ctx->pc = 0x114b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 3));
    // 0x114b20: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x114b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x114b24: 0xae02361c  sw          $v0, 0x361C($s0)
    ctx->pc = 0x114b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13852), GPR_U32(ctx, 2));
    // 0x114b28: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x114b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x114b2c: 0xae033620  sw          $v1, 0x3620($s0)
    ctx->pc = 0x114b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13856), GPR_U32(ctx, 3));
    // 0x114b30: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x114b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114b34: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x114b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x114b38: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x114b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x114b3c: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x114b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x114b40: 0x6a270037  ldl         $a3, 0x37($s1)
    ctx->pc = 0x114b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x114b44: 0x6e270030  ldr         $a3, 0x30($s1)
    ctx->pc = 0x114b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x114b48: 0x6a28003f  ldl         $t0, 0x3F($s1)
    ctx->pc = 0x114b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x114b4c: 0x6e280038  ldr         $t0, 0x38($s1)
    ctx->pc = 0x114b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x114b50: 0xb20233f7  sdl         $v0, 0x33F7($s0)
    ctx->pc = 0x114b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b54: 0xb60233f0  sdr         $v0, 0x33F0($s0)
    ctx->pc = 0x114b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b58: 0xb20333ff  sdl         $v1, 0x33FF($s0)
    ctx->pc = 0x114b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b5c: 0xb60333f8  sdr         $v1, 0x33F8($s0)
    ctx->pc = 0x114b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b60: 0xb2073407  sdl         $a3, 0x3407($s0)
    ctx->pc = 0x114b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b64: 0xb6073400  sdr         $a3, 0x3400($s0)
    ctx->pc = 0x114b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b68: 0xb208340f  sdl         $t0, 0x340F($s0)
    ctx->pc = 0x114b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b6c: 0xb6083408  sdr         $t0, 0x3408($s0)
    ctx->pc = 0x114b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114b70: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114B70u;
    SET_GPR_U32(ctx, 31, 0x114B78u);
    ctx->pc = 0x114B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B70u;
    // 0x114b74: 0x260433d0  addiu       $a0, $s0, 0x33D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114B70u, 0x114B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B78u;
label_114b78:
    // 0x114b78: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x114b7c: 0x26063410  addiu       $a2, $s0, 0x3410
    ctx->pc = 0x114b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 13328));
    // 0x114b80: 0x2625007c  addiu       $a1, $s1, 0x7C
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x114b84: 0xae0333bc  sw          $v1, 0x33BC($s0)
    ctx->pc = 0x114b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13244), GPR_U32(ctx, 3));
    // 0x114b88: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x114b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x114b8c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x114b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x114b90: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x114b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x114b94: 0xae0233c0  sw          $v0, 0x33C0($s0)
    ctx->pc = 0x114b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13248), GPR_U32(ctx, 2));
    // 0x114b98: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x114b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x114b9c: 0xae0333c4  sw          $v1, 0x33C4($s0)
    ctx->pc = 0x114b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13252), GPR_U32(ctx, 3));
    // 0x114ba0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x114ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x114ba4: 0xae0233c8  sw          $v0, 0x33C8($s0)
    ctx->pc = 0x114ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13256), GPR_U32(ctx, 2));
    // 0x114ba8: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x114ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x114bac: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x114BACu;
    {
        const bool branch_taken_0x114bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BACu;
        // 0x114bb0: 0xae0333cc  sw          $v1, 0x33CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 13260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bac) {
            ctx->pc = 0x114C18u;
            goto label_114c18;
        }
    }
    ctx->pc = 0x114BB4u;
    // 0x114bb4: 0x2622027c  addiu       $v0, $s1, 0x27C
    ctx->pc = 0x114bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
label_114bb8:
    // 0x114bb8: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x114bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x114bbc: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x114bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x114bc0: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x114bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x114bc4: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x114bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x114bc8: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x114bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x114bcc: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x114bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x114bd0: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x114bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x114bd4: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x114bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x114bd8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x114bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114bdc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x114bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114be0: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x114be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114be4: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x114be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114be8: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x114be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114bec: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x114becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114bf0: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x114bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114bf4: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x114bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114bf8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x114bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x114bfc: 0x0  nop
    ctx->pc = 0x114bfcu;
    // NOP
    // 0x114c00: 0x0  nop
    ctx->pc = 0x114c00u;
    // NOP
    // 0x114c04: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x114C04u;
    {
        const bool branch_taken_0x114c04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C04u;
        // 0x114c08: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c04) {
            ctx->pc = 0x114BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114bb8;
        }
    }
    ctx->pc = 0x114C0Cu;
    // 0x114c0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114C0Cu;
    {
        const bool branch_taken_0x114c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c0c) {
            ctx->pc = 0x114C50u;
            goto label_114c50;
        }
    }
    ctx->pc = 0x114C14u;
    // 0x114c14: 0x0  nop
    ctx->pc = 0x114c14u;
    // NOP
label_114c18:
    // 0x114c18: 0x2622027c  addiu       $v0, $s1, 0x27C
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
label_114c1c:
    // 0x114c1c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x114c1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114c20: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x114c20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x114c24: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x114c24u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x114c28: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x114c28u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x114c2c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x114c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x114c30: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x114c30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x114c34: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x114c34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x114c38: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x114c38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x114c3c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x114c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x114c40: 0x0  nop
    ctx->pc = 0x114c40u;
    // NOP
    // 0x114c44: 0x0  nop
    ctx->pc = 0x114c44u;
    // NOP
    // 0x114c48: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x114C48u;
    {
        const bool branch_taken_0x114c48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C48u;
        // 0x114c4c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c48) {
            ctx->pc = 0x114C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114c1c;
        }
    }
    ctx->pc = 0x114C50u;
label_114c50:
    // 0x114c50: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x114c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114c54: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x114c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x114c58: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x114c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114c5c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x114c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114c60: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114c64: 0x26250284  addiu       $a1, $s1, 0x284
    ctx->pc = 0x114c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x114c68: 0x2484fb30  addiu       $a0, $a0, -0x4D0
    ctx->pc = 0x114c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    // 0x114c6c: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114C6Cu;
    SET_GPR_U32(ctx, 31, 0x114C74u);
    ctx->pc = 0x114C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C6Cu;
    // 0x114c70: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114C6Cu, 0x114C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C74u;
label_114c74:
    // 0x114c74: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114c78: 0x26250404  addiu       $a1, $s1, 0x404
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1028));
    // 0x114c7c: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x114c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x114c80: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114C80u;
    SET_GPR_U32(ctx, 31, 0x114C88u);
    ctx->pc = 0x114C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C80u;
    // 0x114c84: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114C80u, 0x114C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C88u;
label_114c88:
    // 0x114c88: 0x8e230c04  lw          $v1, 0xC04($s1)
    ctx->pc = 0x114c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3076)));
    // 0x114c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114c94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c98: 0xaf83896c  sw          $v1, -0x7694($gp)
    ctx->pc = 0x114c98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 3));
    // 0x114c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x114C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C9Cu;
        // 0x114ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114CA4u;
}
