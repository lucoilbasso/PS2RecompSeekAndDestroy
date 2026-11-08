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

// Function: entry_001a3bd4
// Address: 0x1a3bd4 - 0x1a3c48
void entry_001a3bd4_0x1a3bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3bd4_0x1a3bd4");
#endif

    switch (ctx->pc) {
        case 0x1a3bf4u: goto label_1a3bf4;
        default: break;
    }

    ctx->pc = 0x1a3bd4u;

    // 0x1a3bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3bd8: 0x68200bf  bltzl       $s4, . + 4 + (0xBF << 2)
    ctx->pc = 0x1A3BD8u;
    {
        const bool branch_taken_0x1a3bd8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x1a3bd8) {
            ctx->pc = 0x1A3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3BD8u;
            // 0x1a3bdc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3ED8u;
            return;
        }
    }
    ctx->pc = 0x1A3BE0u;
    // 0x1a3be0: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1A3BE0u;
    {
        const bool branch_taken_0x1a3be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BE0u;
        // 0x1a3be4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3be0) {
            ctx->pc = 0x1A3EC8u;
            return;
        }
    }
    ctx->pc = 0x1A3BE8u;
    // 0x1a3be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bec: 0xc068b62  jal         func_1A2D88
    ctx->pc = 0x1A3BECu;
    SET_GPR_U32(ctx, 31, 0x1A3BF4u);
    ctx->pc = 0x1A3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BECu;
    // 0x1a3bf0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D88u, 0x1A3BECu, 0x1A3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BF4u;
label_1a3bf4:
    // 0x1a3bf4: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1a3bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a3bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a3bfc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a3c00: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1A3C00u;
    {
        const bool branch_taken_0x1a3c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C00u;
        // 0x1a3c04: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c00) {
            ctx->pc = 0x1A3ED0u;
            return;
        }
    }
    ctx->pc = 0x1A3C08u;
    // 0x1a3c08: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x1a3c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1a3c0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a3c10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3c18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3c1c: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A3C1Cu;
    {
        const bool branch_taken_0x1a3c1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C1Cu;
        // 0x1a3c20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c1c) {
            ctx->pc = 0x1A3C60u;
            return;
        }
    }
    ctx->pc = 0x1A3C24u;
    // 0x1a3c24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3c28: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3C28u;
    {
        const bool branch_taken_0x1a3c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C28u;
        // 0x1a3c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c28) {
            ctx->pc = 0x1A3C7Cu;
            return;
        }
    }
    ctx->pc = 0x1A3C30u;
    // 0x1a3c30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a3c34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3C34u;
    {
        const bool branch_taken_0x1a3c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C34u;
        // 0x1a3c38: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c34) {
            ctx->pc = 0x1A3C48u;
            return;
        }
    }
    ctx->pc = 0x1A3C3Cu;
    // 0x1a3c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C3Cu;
    {
        const bool branch_taken_0x1a3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c3c) {
            ctx->pc = 0x1A3C60u;
            return;
        }
    }
    ctx->pc = 0x1A3C44u;
    // 0x1a3c44: 0x0  nop
    ctx->pc = 0x1a3c44u;
    // NOP
    ctx->pc = 0x1a3c48u;
}
