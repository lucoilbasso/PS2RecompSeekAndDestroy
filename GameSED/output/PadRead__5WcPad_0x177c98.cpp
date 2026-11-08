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

// Function: PadRead__5WcPad
// Address: 0x177c98 - 0x177d50
void PadRead__5WcPad_0x177c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PadRead__5WcPad_0x177c98");
#endif

    switch (ctx->pc) {
        case 0x177cc4u: goto label_177cc4;
        case 0x177cccu: goto label_177ccc;
        case 0x177ce4u: goto label_177ce4;
        case 0x177cecu: goto label_177cec;
        case 0x177cf4u: goto label_177cf4;
        case 0x177cfcu: goto label_177cfc;
        default: break;
    }

    ctx->pc = 0x177c98u;

    // 0x177c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177c9c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x177c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x177ca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177cac: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x177cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x177cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177cb4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x177CB4u;
    {
        const bool branch_taken_0x177cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CB4u;
        // 0x177cb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cb4) {
            ctx->pc = 0x177D3Cu;
            goto label_177d3c;
        }
    }
    ctx->pc = 0x177CBCu;
    // 0x177cbc: 0xc05ddbc  jal         func_1776F0
    ctx->pc = 0x177CBCu;
    SET_GPR_U32(ctx, 31, 0x177CC4u);
    ctx->pc = 0x1776F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1776F0u, 0x177CBCu, 0x177CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CC4u;
label_177cc4:
    // 0x177cc4: 0xc05ddbc  jal         func_1776F0
    ctx->pc = 0x177CC4u;
    SET_GPR_U32(ctx, 31, 0x177CCCu);
    ctx->pc = 0x177CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CC4u;
    // 0x177cc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1776F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1776F0u, 0x177CC4u, 0x177CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CCCu;
label_177ccc:
    // 0x177ccc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177cd0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x177cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x177cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177CD4u;
    {
        const bool branch_taken_0x177cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CD4u;
        // 0x177cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cd4) {
            ctx->pc = 0x177CECu;
            goto label_177cec;
        }
    }
    ctx->pc = 0x177CDCu;
    // 0x177cdc: 0xc05df54  jal         func_177D50
    ctx->pc = 0x177CDCu;
    SET_GPR_U32(ctx, 31, 0x177CE4u);
    ctx->pc = 0x177D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177D50u, 0x177CDCu, 0x177CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0xc05df54  jal         func_177D50
    ctx->pc = 0x177CE4u;
    SET_GPR_U32(ctx, 31, 0x177CECu);
    ctx->pc = 0x177CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CE4u;
    // 0x177ce8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177D50u, 0x177CE4u, 0x177CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CECu;
label_177cec:
    // 0x177cec: 0xc05df7a  jal         func_177DE8
    ctx->pc = 0x177CECu;
    SET_GPR_U32(ctx, 31, 0x177CF4u);
    ctx->pc = 0x177CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CECu;
    // 0x177cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DE8u, 0x177CECu, 0x177CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CF4u;
label_177cf4:
    // 0x177cf4: 0xc05df7a  jal         func_177DE8
    ctx->pc = 0x177CF4u;
    SET_GPR_U32(ctx, 31, 0x177CFCu);
    ctx->pc = 0x177CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CF4u;
    // 0x177cf8: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DE8u, 0x177CF4u, 0x177CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CFCu;
label_177cfc:
    // 0x177cfc: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x177cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x177d00: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x177d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x177d04: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x177d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x177d08: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x177d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x177d0c: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x177d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x177d10: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x177d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x177d14: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x177d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x177d18: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x177d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x177d1c: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x177d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d20: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x177d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d24: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x177d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d28: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x177d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d2c: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x177d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d30: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x177d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d34: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x177d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x177d38: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x177d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_177d3c:
    // 0x177d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d48: 0x3e00008  jr          $ra
    ctx->pc = 0x177D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D48u;
        // 0x177d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177D50u;
}
