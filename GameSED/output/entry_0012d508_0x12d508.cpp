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

// Function: entry_0012d508
// Address: 0x12d508 - 0x12d560
void entry_0012d508_0x12d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d508_0x12d508");
#endif

    ctx->pc = 0x12d508u;

    // 0x12d508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d50c: 0x144301e2  bne         $v0, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x12D50Cu;
    {
        const bool branch_taken_0x12d50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D50Cu;
        // 0x12d510: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d50c) {
            ctx->pc = 0x12DC98u;
            return;
        }
    }
    ctx->pc = 0x12D514u;
    // 0x12d514: 0x9682001e  lhu         $v0, 0x1E($s4)
    ctx->pc = 0x12d514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x12d518: 0x544001e0  bnel        $v0, $zero, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x12D518u;
    {
        const bool branch_taken_0x12d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d518) {
            ctx->pc = 0x12D51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D518u;
            // 0x12d51c: 0xa680001e  sh          $zero, 0x1E($s4) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 20), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC9Cu;
            return;
        }
    }
    ctx->pc = 0x12D520u;
    // 0x12d520: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x12d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x12d524: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x12D524u;
    {
        const bool branch_taken_0x12d524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D524u;
        // 0x12d528: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d524) {
            ctx->pc = 0x12D560u;
            return;
        }
    }
    ctx->pc = 0x12D52Cu;
    // 0x12d52c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x12d52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12d530: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12d530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12d534: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12d534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12d538: 0x24a55e90  addiu       $a1, $a1, 0x5E90
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24208));
    // 0x12d53c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d540: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x12d540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12d544: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x12d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12d548: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12d548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d54c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d550: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D550u;
    {
        const bool branch_taken_0x12d550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D550u;
        // 0x12d554: 0xc4450000  lwc1        $f5, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d550) {
            ctx->pc = 0x12D574u;
            return;
        }
    }
    ctx->pc = 0x12D558u;
    // 0x12d558: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D558u;
    {
        const bool branch_taken_0x12d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D558u;
        // 0x12d55c: 0xc6880058  lwc1        $f8, 0x58($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d558) {
            ctx->pc = 0x12D574u;
            return;
        }
    }
    ctx->pc = 0x12D560u;
}
