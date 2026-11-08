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

// Function: entry_0018b258
// Address: 0x18b258 - 0x18b2a8
void entry_0018b258_0x18b258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b258_0x18b258");
#endif

    ctx->pc = 0x18b258u;

    // 0x18b258: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x18b25c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x18b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18b260: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18b264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18b264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18b268: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b26c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18b270: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x18b274: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x18b274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18b278: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x18b278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x18b27c: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x18b27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18b280: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x18b280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18b284: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x18b284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x18b288: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x18b288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x18b28c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18b28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18b290: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x18b290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18b294: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x18b294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x18b298: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x18b298u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18b29c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x18b29cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x18b2a0: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x18b2a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18b2a4: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x18b2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    ctx->pc = 0x18b2a8u;
}
