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

// Function: entry_001ac44c
// Address: 0x1ac44c - 0x1ac4e8
void entry_001ac44c_0x1ac44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac44c_0x1ac44c");
#endif

    ctx->pc = 0x1ac44cu;

    // 0x1ac44c: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x1ac44cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1ac450: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1ac450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac454: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x1ac454u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1ac458: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x1ac458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x1ac45c: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x1ac45cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1ac460: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ac460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ac464: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x1ac464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1ac468: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1ac468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1ac46c: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x1ac46cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ac470: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac474: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x1ac474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x1ac478: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x1ac478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x1ac47c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1ac47cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1ac480: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac484: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ac484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1ac488: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1ac488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1ac48c: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x1ac48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x1ac490: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x1ac490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1ac494: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1ac494u;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 5));
    // 0x1ac498: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac49c: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x1ac49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x1ac4a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac4a4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ac4a4u;
    runtime->Store32(rdram, ctx, 0x1000E050u, GPR_U32(ctx, 6));
    // 0x1ac4a8: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x1ac4ac: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1ac4acu;
    runtime->Store32(rdram, ctx, 0x1000E040u, GPR_U32(ctx, 8));
    // 0x1ac4b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ac4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ac4b4: 0x24667c40  addiu       $a2, $v1, 0x7C40
    ctx->pc = 0x1ac4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31808));
    // 0x1ac4b8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x1ac4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac4bc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x1ac4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac4c0: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x1ac4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ac4c4: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x1ac4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ac4c8: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1ac4cc: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x1ac4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac4d0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x1ac4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac4d4: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x1ac4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac4d8: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x1ac4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac4dc: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1ac4dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x407C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x407C50u, _value); } while (0);
    // 0x1ac4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E0u;
        // 0x1ac4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC4E8u;
}
