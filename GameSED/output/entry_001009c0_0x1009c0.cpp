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

// Function: entry_001009c0
// Address: 0x1009c0 - 0x100a10
void entry_001009c0_0x1009c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001009c0_0x1009c0");
#endif

    switch (ctx->pc) {
        case 0x1009d8u: goto label_1009d8;
        default: break;
    }

    ctx->pc = 0x1009c0u;

    // 0x1009c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1009c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1009c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1009c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1009c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1009c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1009cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1009ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1009d0: 0xc068316  jal         func_1A0C58
    ctx->pc = 0x1009D0u;
    SET_GPR_U32(ctx, 31, 0x1009D8u);
    ctx->pc = 0x1009D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009D0u;
    // 0x1009d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C58u, 0x1009D0u, 0x1009D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D8u;
label_1009d8:
    // 0x1009d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1009dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1009e0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1009e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1009e4: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1009E4u;
    {
        const bool branch_taken_0x1009e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1009e4) {
            ctx->pc = 0x1009E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1009E4u;
            // 0x1009e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100A64u;
            return;
        }
    }
    ctx->pc = 0x1009ECu;
    // 0x1009ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1009f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1009f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1009f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1009f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1009F8u;
    {
        const bool branch_taken_0x1009f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009F8u;
        // 0x1009fc: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009f8) {
            ctx->pc = 0x100A10u;
            return;
        }
    }
    ctx->pc = 0x100A00u;
    // 0x100a00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x100A04u;
    {
        const bool branch_taken_0x100a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A04u;
        // 0x100a08: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a04) {
            ctx->pc = 0x100A3Cu;
            return;
        }
    }
    ctx->pc = 0x100A0Cu;
    // 0x100a0c: 0x0  nop
    ctx->pc = 0x100a0cu;
    // NOP
    ctx->pc = 0x100a10u;
}
