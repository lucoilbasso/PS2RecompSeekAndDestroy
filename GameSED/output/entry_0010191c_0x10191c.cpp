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

// Function: entry_0010191c
// Address: 0x10191c - 0x101960
void entry_0010191c_0x10191c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010191c_0x10191c");
#endif

    ctx->pc = 0x10191cu;

    // 0x10191c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x10191cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x101920: 0x71401004  plzcw       $v0, $t2
    ctx->pc = 0x101920u;
    { uint64_t v = GPR_U64(ctx, 10); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x101924: 0x70021488  pextlw      $v0, $zero, $v0
    ctx->pc = 0x101924u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x101928: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x101928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x10192c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101930: 0xa5220018  sh          $v0, 0x18($t1)
    ctx->pc = 0x101930u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x101934: 0x71601804  plzcw       $v1, $t3
    ctx->pc = 0x101934u;
    { uint64_t v = GPR_U64(ctx, 11); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x101938: 0x70031c88  pextlw      $v1, $zero, $v1
    ctx->pc = 0x101938u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x10193c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101940: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x101940u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101944: 0xfd200038  sd          $zero, 0x38($t1)
    ctx->pc = 0x101944u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 56), GPR_U64(ctx, 0));
    // 0x101948: 0xa524001a  sh          $a0, 0x1A($t1)
    ctx->pc = 0x101948u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x10194c: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x10194cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x101950: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x101950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x101954: 0x12620002  beq         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101954u;
    {
        const bool branch_taken_0x101954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x101958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101954u;
        // 0x101958: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101954) {
            ctx->pc = 0x101960u;
            return;
        }
    }
    ctx->pc = 0x10195Cu;
    // 0x10195c: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x10195cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x101960u;
}
