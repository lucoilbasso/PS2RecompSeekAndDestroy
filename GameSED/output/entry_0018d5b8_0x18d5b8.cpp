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

// Function: entry_0018d5b8
// Address: 0x18d5b8 - 0x18d608
void entry_0018d5b8_0x18d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d5b8_0x18d5b8");
#endif

    ctx->pc = 0x18d5b8u;

    // 0x18d5b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5bc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d5c0: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x18d5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x18d5c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d5c8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x18d5c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5cc: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x18d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x18d5d0: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x18d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18d5d4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x18d5d8: 0x8e240218  lw          $a0, 0x218($s1)
    ctx->pc = 0x18d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x18d5dc: 0x8e25021c  lw          $a1, 0x21C($s1)
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18d5e0: 0x30560f00  andi        $s6, $v0, 0xF00
    ctx->pc = 0x18d5e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x18d5e4: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x18d5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18d5e8: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x18d5e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18d5ec: 0x16c70006  bne         $s6, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D5ECu;
    {
        const bool branch_taken_0x18d5ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 7));
        ctx->pc = 0x18D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ECu;
        // 0x18d5f0: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5ec) {
            ctx->pc = 0x18D608u;
            return;
        }
    }
    ctx->pc = 0x18D5F4u;
    // 0x18d5f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d5f8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x18d5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18d5fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18D5FCu;
    {
        const bool branch_taken_0x18d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5FCu;
        // 0x18d600: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5fc) {
            ctx->pc = 0x18D64Cu;
            return;
        }
    }
    ctx->pc = 0x18D604u;
    // 0x18d604: 0x0  nop
    ctx->pc = 0x18d604u;
    // NOP
    ctx->pc = 0x18d608u;
}
