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

// Function: entry_0013e158
// Address: 0x13e158 - 0x13e1c0
void entry_0013e158_0x13e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e158_0x13e158");
#endif

    ctx->pc = 0x13e158u;

    // 0x13e158: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x13e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x13e15c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x13e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x13e160: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x13e160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x13e164: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x13e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x13e168: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x13e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x13e16c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x13e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x13e170: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x13e170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x13e174: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x13e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x13e178: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x13e178u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x13e17c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x13e17cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x13e180: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x13e180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x13e184: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x13e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x13e188: 0xafa400e4  sw          $a0, 0xE4($sp)
    ctx->pc = 0x13e188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
    // 0x13e18c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13e190: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x13e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13e194: 0x8cb50014  lw          $s5, 0x14($a1)
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x13e198: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E198u;
    {
        const bool branch_taken_0x13e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E198u;
        // 0x13e19c: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e198) {
            ctx->pc = 0x13E1C0u;
            return;
        }
    }
    ctx->pc = 0x13E1A0u;
    // 0x13e1a0: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x13e1a4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e1a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13e1ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13e1b0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x13e1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13e1b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E1B4u;
    {
        const bool branch_taken_0x13e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1B4u;
        // 0x13e1b8: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1b4) {
            ctx->pc = 0x13E1F4u;
            return;
        }
    }
    ctx->pc = 0x13E1BCu;
    // 0x13e1bc: 0x0  nop
    ctx->pc = 0x13e1bcu;
    // NOP
    ctx->pc = 0x13e1c0u;
}
