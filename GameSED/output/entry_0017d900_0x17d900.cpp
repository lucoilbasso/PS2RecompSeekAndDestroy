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

// Function: entry_0017d900
// Address: 0x17d900 - 0x17d968
void entry_0017d900_0x17d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d900_0x17d900");
#endif

    ctx->pc = 0x17d900u;

    // 0x17d900: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x17d900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d904: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x17d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x17d908: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x17d908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d90c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17d910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d914: 0xa564fffc  sh          $a0, -0x4($t3)
    ctx->pc = 0x17d914u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967292), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d918: 0x1091818  mult        $v1, $t0, $t1
    ctx->pc = 0x17d918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17d91c: 0x592021  addu        $a0, $v0, $t9
    ctx->pc = 0x17d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x17d920: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d924: 0x582821  addu        $a1, $v0, $t8
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x17d928: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d92c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x17d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17d930: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x17d930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17d934: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x17d934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d938: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17d93c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d940: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17d944: 0xa567fff8  sh          $a3, -0x8($t3)
    ctx->pc = 0x17d944u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967288), (uint16_t)GPR_U32(ctx, 7));
    // 0x17d948: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x17d94c: 0xa5680014  sh          $t0, 0x14($t3)
    ctx->pc = 0x17d94cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x17d950: 0xa563fffe  sh          $v1, -0x2($t3)
    ctx->pc = 0x17d950u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d954: 0x14b10004  bne         $a1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D954u;
    {
        const bool branch_taken_0x17d954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x17D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D954u;
        // 0x17d958: 0xa5690016  sh          $t1, 0x16($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 22), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d954) {
            ctx->pc = 0x17D968u;
            return;
        }
    }
    ctx->pc = 0x17D95Cu;
    // 0x17d95c: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x17d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x17d960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17D960u;
    {
        const bool branch_taken_0x17d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D960u;
        // 0x17d964: 0x21183  sra         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d960) {
            ctx->pc = 0x17D974u;
            return;
        }
    }
    ctx->pc = 0x17D968u;
}
